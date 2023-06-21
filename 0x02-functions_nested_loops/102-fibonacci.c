#include <stdio.h>

/**
 * main - Entry point
 * prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i] < 0 || fib[i] > 20365011074)
			break;

		printf(", %ld", fib[i]);
	}
	printf("\n");

	return (0);
}

