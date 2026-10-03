//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

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

	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &nums[index]) != 1)
		{
			free(nums);
			return 1;
		}
	}

	int candidate = 0;
	int votes = 0;
	for (int index = 0; index < n; index++)
	{
		if (votes == 0)
		{
			candidate = nums[index];
			votes = 1;
		}
		else if (nums[index] == candidate)
		{
			votes++;
		}
		else
		{
			votes--;
		}
	}

	int count = 0;
	for (int index = 0; index < n; index++)
	{
		if (nums[index] == candidate)
		{
			count++;
		}
	}

	printf("%d\n", count > n / 2 ? candidate : -1);
	free(nums);
	return 0;
}
