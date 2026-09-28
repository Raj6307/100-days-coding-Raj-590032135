//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main(void) {
	int day;
	int month;
	int year;

	if (scanf("%2d/%2d/%4d", &day, &month, &year) != 3 || month != 4) {
		return 1;
	}

	printf("%02d-Apr-%04d\n", day, year);
	return 0;
}
