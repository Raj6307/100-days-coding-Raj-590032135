//Q69: Find the second largest element in an array.
#include <stdio.h>

int main(void)
{
	int n;
	int largest = 0, second_largest = 0;
	int has_largest = 0, has_second_largest = 0;

	printf("Enter number of elements: ");
	if (scanf("%d", &n) != 1 || n < 2 || n > 100)
	{
		printf("Invalid number of elements.\n");
		return 1;
	}

	printf("Enter %d elements: ", n);
	for (int index = 0; index < n; index++)
	{
		int value;

		if (scanf("%d", &value) != 1)
		{
			printf("Invalid array element.\n");
			return 1;
		}

		if (!has_largest || value > largest)
		{
			if (has_largest)
			{
				second_largest = largest;
				has_second_largest = 1;
			}
			largest = value;
			has_largest = 1;
		}
		else if (value < largest && (!has_second_largest || value > second_largest))
		{
			second_largest = value;
			has_second_largest = 1;
		}
	}

	if (!has_second_largest)
	{
		printf("There is no second largest element.\n");
		return 1;
	}

	printf("Second largest element: %d\n", second_largest);
	return 0;
}