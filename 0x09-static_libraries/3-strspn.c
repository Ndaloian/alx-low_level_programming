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
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		b = 0;

		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				break;
			}

			b++;
		}

		if (accept[b] == '\0')
		{
			return (a);
		}
		a++;
	}

	return (a);
}
