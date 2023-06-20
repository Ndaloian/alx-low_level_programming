#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @ld: Input number as integer
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int lastDigit;

	if (ld < 0)
	{
		lastDigit = -ld % 10;
	}
	else
	{
		lastDigit = ld % 10;
	}
	_putchar(lastDigit + '0');
	_putchar('\n');
	return (lastDigit);
}

