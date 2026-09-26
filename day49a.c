#include <ctype.h>
#include <stdio.h>

int main(void) {
	char name[1000];
	int at_word_start = 1;

	if (fgets(name, sizeof(name), stdin) == NULL) {
		return 1;
	}

	for (int index = 0; name[index] != '\0' && name[index] != '\n'; index++) {
		if (isspace((unsigned char)name[index])) {
			at_word_start = 1;
		} else if (at_word_start) {
			printf("%c.", name[index]);
			at_word_start = 0;
		}
	}

	printf("\n");
	return 0;
}
