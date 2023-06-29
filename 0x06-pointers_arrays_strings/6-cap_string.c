#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: character string
 * Return: string c
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';'
			    || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			    str[i] == '"' || str[i] == '(' || str[i] == ')'
			    || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}

		i++;
	}

	return (str);
}
