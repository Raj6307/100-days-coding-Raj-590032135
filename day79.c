//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main(void)
{
	FILE *file = fopen("numbers.txt", "r");
	if (file == NULL)
	{
		perror("Could not open numbers.txt");
		return 1;
	}

	long long number;
	long long sum = 0;
	long long count = 0;

	while (fscanf(file, "%lld", &number) == 1)
	{
		sum += number;
		count++;
	}

	fclose(file);

	double average = count > 0 ? (double)sum / count : 0.0;
	printf("Sum = %lld\n", sum);
	printf("Average = %.2f\n", average);

	return 0;
}
