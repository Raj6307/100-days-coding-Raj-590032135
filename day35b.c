//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

static void reverse(int numbers[], int start, int end)
{
	while (start < end)
	{
		int temporary = numbers[start];
		numbers[start] = numbers[end];
		numbers[end] = temporary;
		start++;
		end--;
	}
}

int main(void)
{
	int numbers[100], n, positions;

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

	printf("Enter number of positions: ");
	if (scanf("%d", &positions) != 1 || positions < 0)
	{
		printf("Invalid number of positions.\n");
		return 1;
	}

	positions %= n;
	reverse(numbers, 0, n - 1);
	reverse(numbers, 0, positions - 1);
	reverse(numbers, positions, n - 1);

	printf("Array after right rotation: ");
	for (int index = 0; index < n; index++)
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