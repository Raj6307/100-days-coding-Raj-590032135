#include <stdio.h>

int main()
{
	int number, remainingNumber, digit, sum = 0;

	printf("Enter a non-negative number: ");
	if (scanf("%d", &number) != 1 || number < 0) {
		printf("Please enter a non-negative number.\n");
		return 0;
	}

	remainingNumber = number;
	while (remainingNumber != 0) {
		digit = remainingNumber % 10;
		sum += digit;
		remainingNumber /= 10;
	}

	printf("Sum of digits of %d is %d\n", number, sum);

	return 0;
}