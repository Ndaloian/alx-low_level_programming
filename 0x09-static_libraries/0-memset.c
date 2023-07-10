#include "main.h"
#include <stddef.h>

/**
 * *_memset - Fills memomry with a constant byte
 * @s: string
 * @b: character
 * @n: integer
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	if (s == NULL)
	{
		return (NULL);
	}

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
