#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: string
 * @src: string
 * @n: integer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;

	while (n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}

	return (dest);
}
