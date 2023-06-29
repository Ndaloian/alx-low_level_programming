#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: String
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		_putchar(*(s - 1));
		s--;
		length--;
	}
	_putchar('\n');
}
