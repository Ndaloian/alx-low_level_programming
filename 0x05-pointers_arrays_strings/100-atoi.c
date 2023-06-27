#include "main.h"
#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: String
 * Return: Integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int digit = s[i] - '0';

	while (s[i] == ' ')
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - digit) / 10 && sign == 1)
		{
			return (INT_MAX);
		}

		if (result < (INT_MIN + digit) / 10 && sign == -1)
		{
			return (INT_MIN);
		}

		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}

