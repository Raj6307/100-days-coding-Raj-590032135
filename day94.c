#include <stdio.h>

struct Student {
	char name[30];
	int roll;
	int marks;
};

void printStudent(struct Student student) {
	printf("Name: %s | Roll: %d | Marks: %d\n",
		   student.name, student.roll, student.marks);
}

int main(void) {
	struct Student student;

	if (scanf("Student: %29s %d %d", student.name, &student.roll, &student.marks) != 3) {
		return 1;
	}

	printStudent(student);
	return 0;
}

