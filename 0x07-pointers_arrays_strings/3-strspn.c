#include "main.h"

/**
 * _strspn - gets the length
 * of a prefix substring
 * @s: string
 * @accept: character string
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;

	while (*s != '\0')
	{
		match = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}

		if (match == 0)
		{
			return (length);
		}
		length++;
		s++;
		accept = accept - length;
	}

	return (length);
}
