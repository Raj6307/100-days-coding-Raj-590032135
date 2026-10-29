//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <ctype.h>
#include <stdio.h>

int main(void) {
	FILE *file = fopen("text.txt", "r");
	int character;
	int vowels = 0;
	int consonants = 0;

	if (file == NULL) {
		perror("Error opening text.txt");
		return 1;
	}

	while ((character = fgetc(file)) != EOF) {
		if (isalpha((unsigned char)character)) {
			character = tolower((unsigned char)character);
			if (character == 'a' || character == 'e' || character == 'i' ||
				character == 'o' || character == 'u') {
				vowels++;
			} else {
				consonants++;
			}
		}
	}

	if (ferror(file)) {
		perror("Error reading text.txt");
		fclose(file);
		return 1;
	}

	if (fclose(file) == EOF) {
		perror("Error closing text.txt");
		return 1;
	}

	printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
	return 0;
}

