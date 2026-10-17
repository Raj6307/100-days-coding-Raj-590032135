//Q116: Find two indices whose values add up to the target.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n <= 0)
	{
		return 1;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL)
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

	int target;
	if (scanf("%d", &target) != 1)
	{
		free(nums);
		return 1;
	}

	for (int first = 0; first < n; first++)
	{
		for (int second = first + 1; second < n; second++)
		{
			if ((long long)nums[first] + nums[second] == target)
			{
				printf("%d %d\n", first, second);
				free(nums);
				return 0;
			}
		}
	}

	printf("-1 -1\n");
	free(nums);
	return 0;
}
