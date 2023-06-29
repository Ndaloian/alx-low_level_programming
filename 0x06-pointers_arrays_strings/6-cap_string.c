#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @c: character string
 * Return: string c
 */
char *cap_string(char *c)
{
	int i = 0;
	int capitalize_next = 1;

	while (c[i] != '\0')
	{
		if (isspace(c[i]) || ispunct(c[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			c[i] = toupper(c[i]);
			capitalize_next = 0;
		}
		i++;
	}

	return (c);
}


