#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: input number as an integer
 * Return: Absolute value
 */
int _abs(int n)
{
	int n = 0;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
