//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
#include <string.h>

int main(void) {
	char filename[256];
	int character;
	FILE *file;

	printf("Enter filename: ");
	if (fgets(filename, sizeof(filename), stdin) == NULL) {
		fprintf(stderr, "Error: could not read filename.\n");
		return 1;
	}
	filename[strcspn(filename, "\n")] = '\0';

	file = fopen(filename, "r");
	if (file == NULL) {
		printf("Error: File does not exist!\n");
		return 1;
	}

	printf("File opened successfully.\n");
	while ((character = fgetc(file)) != EOF) {
		putchar(character);
	}

	if (ferror(file)) {
		perror("Error reading file");
		fclose(file);
		return 1;
	}

	if (fclose(file) == EOF) {
		perror("Error closing file");
		return 1;
	}

	return 0;
}

