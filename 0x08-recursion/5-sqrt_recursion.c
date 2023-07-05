#include "main.h"

int sqrt_recursive_helper(int n, int start, int end);

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

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_recursive_helper(n, 1, n));
}

/**
 * sqrt_recursive_helper - Recursive helper function
 * for calculating square root
 * @n: Number
 * @start: Starting value for searching square root
 * @end: ending value for searching square root
 * Return: Square root of , or -1
 * if n doesn't have a natural square root
 */
int sqrt_recursive_helper(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);

			if (mid * mid > n)
				return (sqrt_recursive_helper(n, start, mid - 1));

		return (sqrt_recursive_helper(n, mid + 1, end));
	}

	return (end);
}
