//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n <= 0)
	{
		return 1;
	}

	long long target = (long long)n * ((long long)n + 1) / 2;
	int low = 1;
	int high = n;
	int pivot = -1;

	while (low <= high)
	{
		int middle = low + (high - low) / 2;
		long long square = (long long)middle * middle;

		if (square == target)
		{
			pivot = middle;
			break;
		}
		if (square < target)
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}

	printf("%d\n", pivot);
	return 0;
}
