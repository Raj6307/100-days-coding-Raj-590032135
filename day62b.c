//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

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

	long long currentSum = arr[0];
	long long maxSum = arr[0];
	for (int index = 1; index < n; index++)
	{
		if (currentSum < 0)
		{
			currentSum = arr[index];
		}
		else
		{
			currentSum += arr[index];
		}

		if (currentSum > maxSum)
		{
			maxSum = currentSum;
		}
	}

	printf("%lld\n", maxSum);
	free(arr);
	return 0;
}

