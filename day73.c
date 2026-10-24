//Q123: Read a text file and count the total number of characters, words, and lines.
//A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char filename[100];
    int ch;
    int totalChars = 0;
    int totalWords = 0;
    int totalLines = 0;
    int inWord = 0;
    int lastChar = '\0';

    if (argc > 1) {
        snprintf(filename, sizeof(filename), "%s", argv[1]);
    } else {
        printf("Enter file name: ");
        scanf("%99s", filename);
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        totalChars++;
        lastChar = ch;

        if (isspace((unsigned char)ch)) {
            if (ch == '\n') {
                totalLines++;
            }
            inWord = 0;
        } else {
            if (!inWord) {
                totalWords++;
                inWord = 1;
            }
        }
    }

    if (totalChars > 0 && lastChar != '\n' && lastChar != '\r') {
        totalLines++;
    }

    fclose(file);

    printf("Characters: %d\n", totalChars);
    printf("Words: %d\n", totalWords);
    printf("Lines: %d\n", totalLines);

    return 0;
}
