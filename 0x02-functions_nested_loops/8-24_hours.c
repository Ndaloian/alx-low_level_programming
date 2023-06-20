#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: No return
 */
void jack_bauer(void)
{
	int n, m, o, p;

	for (n = 0; n <= 2; n++)
	{
		for (m = 0; m <= 3; m++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					if (n >= 2 && m >= 4)
						break;
					_putchar(n + 48);
					_putchar(m + 48);
					_putchar(58);
					_putchar(o + 48);
					_putchar(p + 48);
					_putchar('\n');
				}
			}
		}
	}
}
