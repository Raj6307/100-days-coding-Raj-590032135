//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
};

struct Employee {
	char name[30];
	int id;
	struct Date joiningDate;
};

int main(void) {
	struct Employee employee;

	if (scanf("Employee: %29s | ID: %d | Joining Date: %d %d %d",
			  employee.name, &employee.id, &employee.joiningDate.day,
			  &employee.joiningDate.month, &employee.joiningDate.year) != 5) {
		return 1;
	}

	printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
		   employee.name, employee.id, employee.joiningDate.day,
		   employee.joiningDate.month, employee.joiningDate.year);

	return 0;
}

