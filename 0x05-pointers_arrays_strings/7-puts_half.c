#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = (length + 1) / 2;

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}

	_putchar('\n');
}

