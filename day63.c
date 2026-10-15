//Q113: Find the kth smallest element in an integer array.

#include <stdio.h>
#include <stdlib.h>

static int compareIntegers(const void *left, const void *right)
{
	int first = *(const int *)left;
	int second = *(const int *)right;
	return (first > second) - (first < second);
}

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n <= 0)
	{
		return 1;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL)
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

	int k;
	if (scanf("%d", &k) != 1 || k <= 0 || k > n)
	{
		free(arr);
		return 1;
	}

	qsort(arr, (size_t)n, sizeof(*arr), compareIntegers);
	printf("%d\n", arr[k - 1]);

	free(arr);
	return 0;
}
