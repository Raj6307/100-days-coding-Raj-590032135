//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

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
	int *answer = malloc((size_t)n * sizeof(*answer));
	if (n > 0 && (nums == NULL || answer == NULL))
	{
		free(nums);
		free(answer);
		return 1;
	}

	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &nums[index]) != 1)
		{
			free(nums);
			free(answer);
			return 1;
		}
	}

	int prefixProduct = 1;
	for (int index = 0; index < n; index++)
	{
		answer[index] = prefixProduct;
		prefixProduct *= nums[index];
	}

	int suffixProduct = 1;
	for (int index = n - 1; index >= 0; index--)
	{
		answer[index] *= suffixProduct;
		suffixProduct *= nums[index];
	}

	printf("[");
	for (int index = 0; index < n; index++)
	{
		printf("%s%d", index == 0 ? "" : ", ", answer[index]);
	}
	printf("]\n");

	free(nums);
	free(answer);
	return 0;
}
