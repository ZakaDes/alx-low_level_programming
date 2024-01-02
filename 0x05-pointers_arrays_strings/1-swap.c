#include "main.h"

/**
 * swap_int - a function that swaps the values of tow ints
 * @n: int
 * @b: int
 * Return: the value of @a and @b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
