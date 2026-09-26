#include <ctype.h>
#include <stdio.h>

int main(void) {
	char name[1000];
	int index = 0;
	int previous_start = 0;
	int previous_end = 0;
	int has_previous = 0;
	int initials_count = 0;

	if (fgets(name, sizeof(name), stdin) == NULL) {
		return 1;
	}

	while (name[index] != '\0' && name[index] != '\n') {
		while (isspace((unsigned char)name[index])) {
			index++;
		}
		if (name[index] == '\0' || name[index] == '\n') {
			break;
		}

		int word_start = index;
		while (name[index] != '\0' && name[index] != '\n' &&
			   !isspace((unsigned char)name[index])) {
			index++;
		}

		if (has_previous) {
			printf("%c.", name[previous_start]);
			initials_count++;
		}
		previous_start = word_start;
		previous_end = index;
		has_previous = 1;
	}

	if (has_previous) {
		if (initials_count > 0) {
			printf(" ");
		}
		printf("%.*s", previous_end - previous_start, name + previous_start);
	}

	printf("\n");
	return 0;
}
