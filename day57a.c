//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

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

	for (int index = 0; index < n; index++)
	{
		int previousGreater = -1;
		for (int left = index - 1; left >= 0; left--)
		{
			if (arr[left] > arr[index])
			{
				previousGreater = arr[left];
				break;
			}
		}

		printf("%s%d", index == 0 ? "" : ", ", previousGreater);
	}
	printf("\n");

	free(arr);
	return 0;
}