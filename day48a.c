#include <stdio.h>
#include <string.h>

int is_rotation(const char first[], const char second[]) {
	size_t first_length = strlen(first);
	size_t second_length = strlen(second);

	if (first_length != second_length) {
		return 0;
	}

	char doubled[2000];
	strcpy(doubled, first);
	strcat(doubled, first);

	return strstr(doubled, second) != NULL;
}

int main(void) {
	char first[1000];
	char second[1000];

	if (scanf("%999s %999s", first, second) != 2) {
		return 1;
	}

	if (is_rotation(first, second)) {
		printf("Rotation\n");
	} else {
		printf("Not rotation\n");
	}

	return 0;
}
