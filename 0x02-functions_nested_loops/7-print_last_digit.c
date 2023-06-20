#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @ld: Input number as integer
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int lastDigit;

	lastDigit = ld % 10;
	if (lastDigit < 0)
	{
		-putchar(-lastDigit + 48);
		return (-lastDigit);
	}
	else
	{
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
	_putchar('\n');
}

