#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * prints the largest prime factor
 * of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long largestFactor = 0;
	unsigned long int i;

	while (num % 2 == 0)
	{
		largestFactor = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largestFactor = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		largestFactor = num;
	}

	printf("%lu\n", largestFactor);

	return (0);
}
