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
<<<<<<< HEAD
=======
			_putchar('0' + (result % 10));

>>>>>>> 9d2cc103663e8a2eb8fe0e4ea038b94b458581ee
			if (j != 9)
			{
				_putchar(',');
			}
		}
	_putchar('\n');
	}
}
