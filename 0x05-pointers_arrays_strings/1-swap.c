#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: Integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int t;

	t = 0;
	t = *a;
	*a = *b;
	*b = t;
}
