//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

enum MenuChoice
{
	ADD,
	SUBTRACT,
	MULTIPLY
};

int main(void)
{
	char choiceText[10];
	enum MenuChoice choice;
	int firstNumber;
	int secondNumber;

	if (scanf("%9s %d %d", choiceText, &firstNumber, &secondNumber) != 3)
	{
		return 1;
	}

	if (strcmp(choiceText, "ADD") == 0)
	{
		choice = ADD;
	}
	else if (strcmp(choiceText, "SUBTRACT") == 0)
	{
		choice = SUBTRACT;
	}
	else if (strcmp(choiceText, "MULTIPLY") == 0)
	{
		choice = MULTIPLY;
	}
	else
	{
		return 1;
	}

	switch (choice)
	{
		case ADD:
			printf("%d\n", firstNumber + secondNumber);
			break;
		case SUBTRACT:
			printf("%d\n", firstNumber - secondNumber);
			break;
		case MULTIPLY:
			printf("%d\n", firstNumber * secondNumber);
			break;
	}

	return 0;
}

