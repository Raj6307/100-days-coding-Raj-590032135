//Q114: Find the length of the longest substring without repeating characters.

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t capacity = 128;
	size_t length = 0;
	char *input = malloc(capacity);
	if (input == NULL)
	{
		return 1;
	}

	int character;
	while ((character = getchar()) != EOF && character != '\n')
	{
		if (length + 1 >= capacity)
		{
			if (capacity > SIZE_MAX / 2)
			{
				free(input);
				return 1;
			}
			size_t newCapacity = capacity * 2;
			char *resizedInput = realloc(input, newCapacity);
			if (resizedInput == NULL)
			{
				free(input);
				return 1;
			}
			input = resizedInput;
			capacity = newCapacity;
		}
		input[length++] = (char)character;
	}

	if (length > 0 && input[length - 1] == '\r')
	{
		length--;
	}

	size_t lastSeen[256];
	for (size_t index = 0; index < 256; index++)
	{
		lastSeen[index] = SIZE_MAX;
	}

	size_t windowStart = 0;
	size_t longestLength = 0;
	for (size_t index = 0; index < length; index++)
	{
		unsigned char byte = (unsigned char)input[index];
		if (lastSeen[byte] != SIZE_MAX && lastSeen[byte] >= windowStart)
		{
			windowStart = lastSeen[byte] + 1;
		}
		lastSeen[byte] = index;

		size_t windowLength = index - windowStart + 1;
		if (windowLength > longestLength)
		{
			longestLength = windowLength;
		}
	}

	printf("%zu\n", longestLength);
	free(input);
	return 0;
}
