//Q68: Delete an element from an array.
#include <stdio.h>

int main(void)
{
	int numbers[100], n, position;

	printf("Enter number of elements: ");
	if (scanf("%d", &n) != 1 || n < 1 || n > 100)
	{
		printf("Invalid number of elements.\n");
		return 1;
	}

	printf("Enter %d elements: ", n);
	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &numbers[index]) != 1)
		{
			printf("Invalid array element.\n");
			return 1;
		}
	}

	printf("Enter position to delete: ");
	if (scanf("%d", &position) != 1 || position < 0 || position >= n)
	{
		printf("Invalid position. Use a zero-based position from 0 to %d.\n", n - 1);
		return 1;
	}

	for (int index = position; index < n - 1; index++)
	{
		numbers[index] = numbers[index + 1];
	}

	printf("Array after deletion: ");
	for (int index = 0; index < n - 1; index++)
	{
		if (index > 0)
		{
			printf(" ");
		}
		printf("%d", numbers[index]);
	}
	printf("\n");

	return 0;
}