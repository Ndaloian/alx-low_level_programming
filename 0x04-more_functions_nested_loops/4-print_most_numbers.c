#include "main.h"

/**
 * print_most_numbers - prints 0 to 9
 * but skips other numbers
 * Return: No return value
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
