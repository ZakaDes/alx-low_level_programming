#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * at a given index
 * @n: the number
 * @index: the index starting from 0 of the bit we want
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = (n >> index);


	return (bit & 1);
}
