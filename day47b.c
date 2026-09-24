#include <stdio.h>
#include <string.h>

void find_longest_word(char sentence[]) {
    int max_len = 0;
    int max_start = 0;
    int current_len = 0;
    int current_start = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            if (current_len > max_len) {
                max_len = current_len;
                max_start = current_start;
            }
            current_len = 0;
            current_start = i + 1;
        } else {
            current_len++;
        }
    }

    if (current_len > max_len) {
        max_len = current_len;
        max_start = current_start;
    }

    for (int j = 0; j < max_len; j++) {
        printf("%c", sentence[max_start + j]);
    }
    printf("\n");
}

int main() {
    char input1[] = "I love programming";
    find_longest_word(input1);

    return 0;
}
