#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a string
 * @haystack: string
 * @needle: string
 * Return:  pointer to the beginning
 * of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p_haystack;
	char *p_needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		p_haystack = haystack;
		p_needle = needle;

		while (*p_haystack == *p_needle && *p_needle != '\0')
		{
			p_haystack++;
			p_needle++;
		}

		if (*p_needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
