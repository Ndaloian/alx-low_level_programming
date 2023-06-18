#include <stdio.h>

/**
 * main - Entry point
 * Print combination of three numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (o = 50; o < 58; o++)
			{
				if (o > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
