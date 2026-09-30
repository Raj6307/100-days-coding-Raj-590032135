//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0)
	{
		return 1;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (n > 0 && arr == NULL)
	{
		return 1;
	}

	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &arr[index]) != 1)
		{
			free(arr);
			return 1;
		}
	}

	int x;
	if (scanf("%d", &x) != 1)
	{
		free(arr);
		return 1;
	}

	int low = 0;
	int high = n;
	while (low < high)
	{
		int middle = low + (high - low) / 2;
		if (arr[middle] < x)
		{
			low = middle + 1;
		}
		else
		{
			high = middle;
		}
	}

	printf("%d\n", low < n ? low : -1);
	free(arr);
	return 0;
}