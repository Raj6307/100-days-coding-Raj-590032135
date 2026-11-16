#include <stdio.h>

struct Student {
	char name[30];
	int roll;
	int marks;
};

struct Student findTopStudent(struct Student students[], int count) {
	struct Student topStudent = students[0];

	for (int i = 1; i < count; i++) {
		if (students[i].marks > topStudent.marks) {
			topStudent = students[i];
		}
	}

	return topStudent;
}

int main(void) {
	int count;
	if (scanf("%d", &count) != 1 || count <= 0) {
		return 1;
	}

	struct Student students[count];
	for (int i = 0; i < count; i++) {
		if (scanf("%29s %d %d", students[i].name,
				  &students[i].roll, &students[i].marks) != 3) {
			return 1;
		}
	}

	struct Student topStudent = findTopStudent(students, count);
	printf("Top Student: %s | Roll: %d | Marks: %d\n",
		   topStudent.name, topStudent.roll, topStudent.marks);

	return 0;
}