#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string character
 * @src: string character
 * @n: Integer
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	*temp = '\0';

	return (dest);
}
