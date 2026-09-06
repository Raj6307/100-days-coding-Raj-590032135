//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main()
{
	int n, number, divisor, is_prime, first_prime = 1;

	scanf("%d", &n);

	for (number = 2; number <= n; number++)
	{
		is_prime = 1;

		for (divisor = 2; divisor < number; divisor++)
		{
			if (number % divisor == 0)
			{
				is_prime = 0;
				break;
			}
		}

		if (is_prime)
		{
			if (!first_prime)
			{
				printf(" ");
			}
			printf("%d", number);
			first_prime = 0;
		}
	}

	printf("\n");

	return 0;
}
