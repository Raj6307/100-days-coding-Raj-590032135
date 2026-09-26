#include <ctype.h>
#include <stdio.h>
#include <string.h>

void reverse_range(char sentence[], int left, int right) {
	while (left < right) {
		char temporary = sentence[left];
		sentence[left] = sentence[right];
		sentence[right] = temporary;
		left++;
		right--;
	}
}

int main(void) {
	char sentence[1000];

	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 1;
	}

	size_t length = strlen(sentence);
	if (length > 0 && sentence[length - 1] == '\n') {
		sentence[--length] = '\0';
	}

	for (int index = 0; index < (int)length;) {
		if (isspace((unsigned char)sentence[index])) {
			index++;
			continue;
		}

		int start = index;
		while (index < (int)length && !isspace((unsigned char)sentence[index])) {
			index++;
		}
		reverse_range(sentence, start, index - 1);
	}

	printf("%s\n", sentence);
	return 0;
}
