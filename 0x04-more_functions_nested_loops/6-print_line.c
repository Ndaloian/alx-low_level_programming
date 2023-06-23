#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of times _ should be printed
 * Return: No return value
 */
void print_line(int n)
{
	int a;

	for (a = 1; a < n; a++)
	{
		_putchar('_');
		if (a <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
