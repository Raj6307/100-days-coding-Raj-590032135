//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>

int main()
{
	int n, element, maximum, minimum;

	scanf("%d", &n);
	scanf("%d", &element);
	maximum = minimum = element;

	for (int index = 1; index < n; index++)
	{
		scanf("%d", &element);

		if (element > maximum)
		{
			maximum = element;
		}

		if (element < minimum)
		{
			minimum = element;
		}
	}

	printf("Max=%d, Min=%d\n", maximum, minimum);

	return 0;
}
