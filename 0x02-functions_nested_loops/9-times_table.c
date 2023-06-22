#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (j != 0)
			{
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (result / 10));
			}
			_putchar('0' + (result % 10));

			if (j != 9)
			{
				_putchar(',');
			}
		}
	_putchar('\n');
	}
}
