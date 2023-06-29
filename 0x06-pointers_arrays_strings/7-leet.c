#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: String
 * Return: String
 */
char *leet(char *str)
{
	char *ptr = str;
	char replacements[] = "aAeEoOtTlL";
	char leet_chars[] = "433071";

	while (*ptr != '\0')
	{
		int index = 0;
		int found = 0;

		while (replacements[index] != '\0')
		{
			if (*ptr == replacements[index])
			{
				*ptr = leet_chars[index];
				found = 1;
				break;
			}
			index++;
		}

		if (ifound)
		{
			ptr++;
		}
	}

	return (str);
}

