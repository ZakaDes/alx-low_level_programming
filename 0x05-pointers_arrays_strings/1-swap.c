#include "main.h"

/**
 * swap_int - swaps the values of the two integers a and b
 * @a: integer to swap with b
 * @b: int to swap with a
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
