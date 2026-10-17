//Q115: Determine whether two lowercase strings are anagrams.

#include <ctype.h>
#include <stdio.h>

static int readLetterCounts(size_t counts[26], size_t *length)
{
	int character;
	do
	{
		character = getchar();
	} while (character != EOF && isspace((unsigned char)character));

	if (character == EOF)
	{
		return 0;
	}

	while (character != EOF && !isspace((unsigned char)character))
	{
		if (character < 'a' || character > 'z')
		{
			return 0;
		}
		counts[character - 'a']++;
		(*length)++;
		character = getchar();
	}

	return 1;
}

int main(void)
{
	size_t countsS[26] = {0};
	size_t countsT[26] = {0};
	size_t lengthS = 0;
	size_t lengthT = 0;

	if (!readLetterCounts(countsS, &lengthS) || !readLetterCounts(countsT, &lengthT))
	{
		return 1;
	}

	int areAnagrams = lengthS == lengthT;
	for (int letter = 0; letter < 26 && areAnagrams; letter++)
	{
		if (countsS[letter] != countsT[letter])
		{
			areAnagrams = 0;
		}
	}

	printf("%s\n", areAnagrams ? "Anagram" : "Not Anagram");
	return 0;
}
