#include <stdio.h>

int main(void)
{
    char sentence[200];
    int i, j, maxLen = 0, currentLen = 0, bestStart = 0;

    if (!fgets(sentence, sizeof(sentence), stdin))
        return 1;

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t' || sentence[i] == '\r')
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                bestStart = i - currentLen;
            }
            currentLen = 0;
        }
        else
        {
            currentLen++;
        }
    }

    if (currentLen > maxLen)
    {
        maxLen = currentLen;
        bestStart = i - currentLen;
    }

    for (j = 0; j < maxLen; j++)
    {
        printf("%c", sentence[bestStart + j]);
    }

    printf("\n");
    return 0;
}