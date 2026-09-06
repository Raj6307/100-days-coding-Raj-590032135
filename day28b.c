//Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>

int main()
{
	int elements[100];
	int n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &elements[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(" ");
		}
		printf("%d", elements[i]);
	}

	printf("\n");

	return 0;
}
