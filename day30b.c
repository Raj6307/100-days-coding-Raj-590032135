//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main()
{
	int n, element, positive = 0, negative = 0, zero = 0;

	scanf("%d", &n);

	for (int index = 0; index < n; index++)
	{
		scanf("%d", &element);

		if (element > 0)
		{
			positive++;
		}
		else if (element < 0)
		{
			negative++;
		}
		else
		{
			zero++;
		}
	}

	printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

	return 0;
}
