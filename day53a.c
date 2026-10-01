//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n < 0)
	{
		return 1;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (n > 0 && nums == NULL)
	{
		return 1;
	}

	long long total = 0;
	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &nums[index]) != 1)
		{
			free(nums);
			return 1;
		}
		total += nums[index];
	}

	long long left = 0;
	int pivot = -1;
	for (int index = 0; index < n; index++)
	{
		if (left == total - left - nums[index])
		{
			pivot = index;
			break;
		}
		left += nums[index];
	}

	printf("%d\n", pivot);
	free(nums);
	return 0;
}
