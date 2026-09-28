//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main(void) {
	char text[1000];
	int has_printed = 0;

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 1;
	}

	text[strcspn(text, "\r\n")] = '\0';

	for (int start = 0; text[start] != '\0'; start++) {
		for (int end = start + 1; text[end - 1] != '\0'; end++) {
			if (has_printed) {
				printf(",");
			}
			printf("%.*s", end - start, text + start);
			has_printed = 1;
		}
	}

	printf("\n");
	return 0;
}
