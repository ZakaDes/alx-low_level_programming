#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to function
 * Return: returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size > 0)
	{
		if (array && cmp)
		{
			while (size > 0)
			{
				if (cmp(array[i]))
					return (i);
				i++;

			}
		}
	}

	return (-1);
}
