#include "main.h"

/**
 * reverse_array - reverse the content of an array of ints
 * @a: array of ints
 * @n: the number of elements
 */

void reverse_array(int *a, int n)
{
	int start, end, i;

	for (i = 0; i < n && i < n / 2; i++)
	{
		start = a[i];
		end = a[(n - 1) - i];
		a[i] = end;
		a[(n - 1) - i] = start;

	}
}
