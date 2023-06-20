#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @ld: Input number as integer
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int lastDigit;

	ld = lastDigit % 10;
	_putchar(ld + '0');
	_putchar('\n');
	return (ld);
}

