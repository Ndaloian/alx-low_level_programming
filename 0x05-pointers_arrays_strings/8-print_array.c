#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements
 * of an array of integers
 * @a: Integer
 * @n: Second Integer
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	return;

	printf("%d", a[0]);

	for (int i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
