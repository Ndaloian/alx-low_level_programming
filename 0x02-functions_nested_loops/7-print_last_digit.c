#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @lastDigit: Input number as integer
 * Return: value of the last digit
 */
int print_last_digit(int lastDigit)
{
	int n;

	n = lastDigit % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (1);
	}
	_putchar('\n');
}
