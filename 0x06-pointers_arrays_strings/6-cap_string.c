#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 * @str: String character
 * Return: String
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char nots[] = ",;.!?(){}\n\t\" ";
	int is_separator = 0;
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

		for (j = 0; nots[j] != '\0'; j++)
		{
			if (str[i] == nots[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator)
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (str);
}

