//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main(void)
{
	int numbers[101], n, position, element;

	printf("Enter number of elements: ");
	if (scanf("%d", &n) != 1 || n < 0 || n >= 101)
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

	printf("Enter position and element: ");
	if (scanf("%d %d", &position, &element) != 2 || position < 0 || position > n)
	{
		printf("Invalid position or element.\n");
		return 1;
	}

	for (int index = n; index > position; index--)
	{
		numbers[index] = numbers[index - 1];
	}
	numbers[position] = element;

	printf("Array after insertion: ");
	for (int index = 0; index <= n; index++)
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