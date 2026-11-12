//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

struct Student
{
	char name[50];
	int roll_no;
	int marks;
};

int main(void)
{
	struct Student student;

	if (scanf("Name: %49[^\n]\nRoll: %d\nMarks: %d", student.name, &student.roll_no, &student.marks) != 3)
	{
		return 1;
	}

	printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);
	return 0;
}

