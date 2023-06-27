#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: String
 * Return: Integer
 */
int _atoi(char *s)
{
	int son = 1;
	int r = 0;
	int i = 0;

	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			son = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (r > INT_MAX / 10 || (r == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (son == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r * son);
}
