#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;
	char c;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;

	while (start < end)
	{
		c = *start;
		*start = *end;
		*end = c;

		start++;
		end--;
	}
}
