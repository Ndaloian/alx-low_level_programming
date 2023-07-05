#include "main.h"

int sqrt_recursive_helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: number
 * Return: Square root of n, or -1
 * if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_recursive_helper(n, 1));
}

/**
 * sqrt_recursive_helper - Recursive helper function
 * for calculating square root
 * @n: Number
 * @i: current value for checking square root
 * Return: Square root of , or -1
 * if n doesn't have a natural square root
 */
int sqrt_recursive_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_recursive_helper(n, i + 1));
}
