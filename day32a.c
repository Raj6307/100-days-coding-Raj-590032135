//Q63: Merge two arrays.
#include <stdio.h>

int main()
{
	int firstSize, secondSize;

	scanf("%d", &firstSize);
	int firstArray[firstSize];

	for (int index = 0; index < firstSize; index++)
	{
		scanf("%d", &firstArray[index]);
	}

	scanf("%d", &secondSize);
	int secondArray[secondSize];

	for (int index = 0; index < secondSize; index++)
	{
		scanf("%d", &secondArray[index]);
	}

	int mergedArray[firstSize + secondSize];

	for (int index = 0; index < firstSize; index++)
	{
		mergedArray[index] = firstArray[index];
	}

	for (int index = 0; index < secondSize; index++)
	{
		mergedArray[firstSize + index] = secondArray[index];
	}

	for (int index = 0; index < firstSize + secondSize; index++)
	{
		printf("%d", mergedArray[index]);
		if (index < firstSize + secondSize - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
