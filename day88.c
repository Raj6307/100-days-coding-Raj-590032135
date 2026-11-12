//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum TrafficLight
{
	RED,
	YELLOW,
	GREEN
};

int main(void)
{
	const char *names[] = {"RED", "YELLOW", "GREEN"};
	int index;

	for (index = 0; index < 3; index++)
	{
		printf("%s=%d\n", names[index], index);
	}

	return 0;
}

