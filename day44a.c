#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char str[1000];
	int spaces = 0;
	int digits = 0;
	int special = 0;

	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++)
	{
		unsigned char character = (unsigned char)str[i];

		if (character == ' ')
		{
			spaces++;
		}
		else if (isdigit(character))
		{
			digits++;
		}
		else if (!isalnum(character) && character != '\n')
		{
			special++;
		}
	}

	printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

	return 0;
}
