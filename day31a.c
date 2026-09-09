//Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main()
{
	int n, target, foundIndex = -1;

	scanf("%d", &n);
	int array[n];

	for (int index = 0; index < n; index++)
	{
		scanf("%d", &array[index]);
	}

	scanf("%d", &target);

	for (int index = 0; index < n; index++)
	{
		if (array[index] == target)
		{
			foundIndex = index;
			break;
		}
	}

	if (foundIndex != -1)
	{
		printf("Found at index %d\n", foundIndex);
	}
	else
	{
		printf("-1\n");
	}

	return 0;
}