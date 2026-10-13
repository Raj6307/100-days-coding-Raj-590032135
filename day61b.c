//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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
	int *negativeIndices = malloc((size_t)n * sizeof(*negativeIndices));
	if (arr == NULL || negativeIndices == NULL)
	{
		free(arr);
		free(negativeIndices);
		return 1;
	}

	for (int index = 0; index < n; index++)
	{
		if (scanf("%d", &arr[index]) != 1)
		{
			free(arr);
			free(negativeIndices);
			return 1;
		}
	}

	int k;
	if (scanf("%d", &k) != 1 || k <= 0 || k > n)
	{
		free(arr);
		free(negativeIndices);
		return 1;
	}

	int head = 0;
	int tail = 0;
	for (int index = 0; index < n; index++)
	{
		while (head < tail && negativeIndices[head] <= index - k)
		{
			head++;
		}

		if (arr[index] < 0)
		{
			negativeIndices[tail++] = index;
		}

		if (index >= k - 1)
		{
			int firstNegative = head < tail ? arr[negativeIndices[head]] : 0;
			printf("%s%d", index == k - 1 ? "" : " ", firstNegative);
		}
	}
	printf("\n");

	free(arr);
	free(negativeIndices);
	return 0;
}
