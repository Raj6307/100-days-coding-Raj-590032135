#include <stdio.h>

int main(void)
{
	FILE *file = fopen("students.txt", "w+");
	char name[50];
	int roll;
	int marks;

	if (file == NULL)
	{
		perror("Could not open students.txt");
		return 1;
	}

	while (scanf("%49s %d %d", name, &roll, &marks) == 3)
	{
		fprintf(file, "%s %d %d\n", name, roll, marks);
	}

	rewind(file);

	while (fscanf(file, "%49s %d %d", name, &roll, &marks) == 3)
	{
		printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
	}

	fclose(file);
	return 0;
}

