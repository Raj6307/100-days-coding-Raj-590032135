//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main(void) {
	char filename[256];
	char text[1024];
	FILE *file;
	long fileSize;
	int lastCharacter = EOF;

	printf("Enter file name: ");
	if (scanf("%255s", filename) != 1) {
		fprintf(stderr, "Error: could not read file name.\n");
		return 1;
	}
	while (getchar() != '\n' && !feof(stdin)) {
	}

	printf("Enter text to append: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		fprintf(stderr, "Error: could not read text.\n");
		return 1;
	}
	text[strcspn(text, "\n")] = '\0';

	file = fopen(filename, "a+b");
	if (file == NULL) {
		perror("Error opening file");
		return 1;
	}

	if (fseek(file, 0, SEEK_END) != 0 || (fileSize = ftell(file)) < 0) {
		perror("Error checking file");
		fclose(file);
		return 1;
	}
	if (fileSize > 0) {
		if (fseek(file, -1L, SEEK_END) != 0 || (lastCharacter = fgetc(file)) == EOF) {
			perror("Error reading file");
			fclose(file);
			return 1;
		}
	}

	if ((fileSize > 0 && lastCharacter != '\n' && fputc('\n', file) == EOF) ||
		fputs(text, file) == EOF || fputc('\n', file) == EOF) {
		perror("Error appending to file");
		fclose(file);
		return 1;
	}

	if (fclose(file) == EOF) {
		perror("Error closing file");
		return 1;
	}

	printf("File updated successfully with appended text.\n");
	return 0;
}

