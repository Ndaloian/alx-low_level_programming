#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string character
 * @src: string character
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';

	return (dest);
}
