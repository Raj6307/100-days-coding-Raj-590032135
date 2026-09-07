//Q57: Find the sum of array elements.
#include <stdio.h>

int main()
{
	int n, element, sum = 0;

	scanf("%d", &n);

	for (int index = 0; index < n; index++)
	{
		scanf("%d", &element);
		sum += element;
	}

	printf("%d\n", sum);

	return 0;
}
