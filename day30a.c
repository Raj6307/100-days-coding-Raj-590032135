//Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main()
{
	int n, element, even = 0, odd = 0;

	scanf("%d", &n);

	for (int index = 0; index < n; index++)
	{
		scanf("%d", &element);

		if (element % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("Even=%d, Odd=%d\n", even, odd);

	return 0;
}
