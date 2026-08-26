//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() 
{
	int number, original, digits = 0, remainder;
	int sum = 0, power, count;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0) {
		printf("Not an Armstrong number\n");
		return 0;
	}

	original = number;
	count = number;

	if (count == 0) {
		digits = 1;
	}

	while (count != 0) {
		digits++;
		count /= 10;
	}

	count = number;
	while (count != 0) {
		remainder = count % 10;
		power = 1;

		for (int i = 0; i < digits; i++) {
			power *= remainder;
		}

		sum += power;
		count /= 10;
	}

	if (original == sum) {
		printf("Armstrong number\n");
	} else {
		printf("Not an Armstrong number\n");
	}

	return 0;
}
