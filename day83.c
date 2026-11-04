#include <stdio.h>
#include <string.h>

enum OperationStatus
{
	SUCCESS,
	FAILURE,
	TIMEOUT
};

int main(void)
{
	char input[10];
	enum OperationStatus status;

	if (scanf("%9s", input) != 1)
	{
		return 1;
	}

	if (strcmp(input, "SUCCESS") == 0)
	{
		status = SUCCESS;
	}
	else if (strcmp(input, "FAILURE") == 0)
	{
		status = FAILURE;
	}
	else if (strcmp(input, "TIMEOUT") == 0)
	{
		status = TIMEOUT;
	}
	else
	{
		return 1;
	}

	switch (status)
	{
		case SUCCESS:
			printf("Operation successful\n");
			break;
		case FAILURE:
			printf("Operation failed\n");
			break;
		case TIMEOUT:
			printf("Operation timed out\n");
			break;
	}

	return 0;
}