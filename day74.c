//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main(void) {
	char sourceName[256];
	char destinationName[256];
	FILE *source;
	FILE *destination;
	int character;

	printf("Enter source file name: ");
	if (scanf("%255s", sourceName) != 1) {
		fprintf(stderr, "Error: could not read source file name.\n");
		return 1;
	}

	printf("Enter destination file name: ");
	if (scanf("%255s", destinationName) != 1) {
		fprintf(stderr, "Error: could not read destination file name.\n");
		return 1;
	}

	source = fopen(sourceName, "rb");
	if (source == NULL) {
		perror("Error opening source file");
		return 1;
	}

	destination = fopen(destinationName, "wb");
	if (destination == NULL) {
		perror("Error opening destination file");
		fclose(source);
		return 1;
	}

	while ((character = fgetc(source)) != EOF) {
		if (fputc(character, destination) == EOF) {
			perror("Error writing to destination file");
			fclose(source);
			fclose(destination);
			return 1;
		}
	}

	if (ferror(source)) {
		perror("Error reading source file");
		fclose(source);
		fclose(destination);
		return 1;
	}

	if (fclose(source) == EOF) {
		perror("Error closing source file");
		fclose(destination);
		return 1;
	}

	if (fclose(destination) == EOF) {
		perror("Error closing destination file");
		return 1;
	}

	printf("File copied successfully to %s\n", destinationName);
	return 0;
}
