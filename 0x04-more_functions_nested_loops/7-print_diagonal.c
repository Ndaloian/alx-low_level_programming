#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b;
		int c;

		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (b == c)
				{
					_putchar('\\');
				}
				else if (c < b)
				{
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
