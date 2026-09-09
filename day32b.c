//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
	char number[1000];
	int frequency[10] = {0};

	scanf("%999s", number);

	for (int index = 0; number[index] != '\0'; index++)
	{
		if (number[index] >= '0' && number[index] <= '9')
		{
			frequency[number[index] - '0']++;
		}
	}

	int mostFrequentDigit = 0;

	for (int digit = 1; digit < 10; digit++)
	{
		if (frequency[digit] > frequency[mostFrequentDigit])
		{
			mostFrequentDigit = digit;
		}
	}

	printf("%d\n", mostFrequentDigit);

	return 0;
}
