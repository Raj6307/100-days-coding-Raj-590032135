//Q82: Print each character of a string on a new line.
#include <stdio.h>

int main()
{
    char str[100];

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n' || str[i] == '\r')
            break;

        printf("%c\n", str[i]);
    }

    return 0;
}