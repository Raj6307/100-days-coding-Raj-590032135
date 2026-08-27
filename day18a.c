#include <stdio.h>

int main()
{
	int number;

	printf("Enter a positive number: ");
	scanf("%d", &number);

	if (number <= 0) {
		printf("Please enter a positive number.\n");
		return 0;
	}

	printf("Factors of %d are: ", number);
	for (int divisor = 1; divisor <= number; divisor++) {
		if (number % divisor == 0) {
			printf("%d ", divisor);
		}
	}

	printf("\n");
	return 0;
}