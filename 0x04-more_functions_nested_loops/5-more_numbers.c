#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: No return value
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
		_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
