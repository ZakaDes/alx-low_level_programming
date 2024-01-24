#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of the array
 * @array: the array
 * @size: the array size
 * @action: a pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
