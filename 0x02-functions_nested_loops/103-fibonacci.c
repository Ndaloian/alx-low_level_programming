#include <stdio.h>

/**
 * main - Entry point
 * find and print the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int sum = 2;
	long int next_fib = 0;

	while (next_fib <= 4000000)
	{
		next_fib = fib1 + fib2;
		if (next_fib % 2 == 0)
		{
			sum += next_fib;
		}
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%ld\n", sum);
	return (0);
}
