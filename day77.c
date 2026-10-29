//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <ctype.h>
#include <stdio.h>

int main(void) {
	FILE *inputFile = fopen("input.txt", "r");
	FILE *outputFile;
	int character;

	if (inputFile == NULL) {
		perror("Error opening input.txt");
		return 1;
	}

	outputFile = fopen("output.txt", "w");
	if (outputFile == NULL) {
		perror("Error opening output.txt");
		fclose(inputFile);
		return 1;
	}

	while ((character = fgetc(inputFile)) != EOF) {
		if (fputc(toupper((unsigned char)character), outputFile) == EOF) {
			perror("Error writing output.txt");
			fclose(inputFile);
			fclose(outputFile);
			return 1;
		}
	}

	if (ferror(inputFile)) {
		perror("Error reading input.txt");
		fclose(inputFile);
		fclose(outputFile);
		return 1;
	}

	if (fclose(inputFile) == EOF) {
		perror("Error closing input.txt");
		fclose(outputFile);
		return 1;
	}
	if (fclose(outputFile) == EOF) {
		perror("Error closing output.txt");
		return 1;
	}

	return 0;
}
