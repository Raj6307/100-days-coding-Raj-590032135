//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
#include <stdlib.h>

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

	long long windowSum = 0;
	for (int index = 0; index < k; index++)
	{
		windowSum += arr[index];
	}

	long long maxSum = windowSum;
	for (int index = k; index < n; index++)
	{
		windowSum += arr[index] - arr[index - k];
		if (windowSum > maxSum)
		{
			maxSum = windowSum;
		}
	}

	printf("%lld\n", maxSum);
	free(arr);
	return 0;
}
