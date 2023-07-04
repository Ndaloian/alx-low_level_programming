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
	char *p_accept = accept;

	while (*s != '\0')
	{
		while (*p_accept != '\0')
		{
			if (*s == *p_accept)
			{
				return (s);
			}

			p_accept++;
		}
		s++;
	}

	return (NULL);
}

