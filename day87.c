//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

enum UserRole
{
	ADMIN,
	USER,
	GUEST
};

int main(void)
{
	char roleText[10];
	enum UserRole role;

	if (scanf("%9s", roleText) != 1)
	{
		return 1;
	}

	if (strcmp(roleText, "ADMIN") == 0)
	{
		role = ADMIN;
	}
	else if (strcmp(roleText, "USER") == 0)
	{
		role = USER;
	}
	else if (strcmp(roleText, "GUEST") == 0)
	{
		role = GUEST;
	}
	else
	{
		return 1;
	}

	switch (role)
	{
		case ADMIN:
			printf("Welcome Admin!\n");
			break;
		case USER:
			printf("Welcome User!\n");
			break;
		case GUEST:
			printf("Welcome Guest!\n");
			break;
	}

	return 0;
}

