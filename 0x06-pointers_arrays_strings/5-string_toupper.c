#include "main.h"

/**
 * *string_toupper - changes all lowercase
 * letters of a string to uppercase
 * @c: string
 * Return: c
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
