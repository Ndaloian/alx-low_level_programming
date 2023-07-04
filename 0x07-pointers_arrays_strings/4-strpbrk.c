#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *c;

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;

		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = &s[a];
				return (s);
			}

			b++;
		}
		a++;
	}

	return (NULL);
}

