#include <stdio.h>

int main()
{
	int firstNumber, secondNumber;
	int firstValue, secondValue, remainder;

	printf("Enter two positive numbers: ");
	if (scanf("%d %d", &firstNumber, &secondNumber) != 2 ||
		firstNumber <= 0 || secondNumber <= 0) {
		printf("Please enter two positive numbers.\n");
		return 0;
	}

	firstValue = firstNumber;
	secondValue = secondNumber;
	while (secondValue != 0) {
		remainder = firstValue % secondValue;
		firstValue = secondValue;
		secondValue = remainder;
	}

	printf("LCM of %d and %d is %lld\n",
		firstNumber, secondNumber,
		(long long)firstNumber / firstValue * secondNumber);

	return 0;
}