#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: the first num
 * @m: the second num
 *
 * Return: the number of bits to flip to get from
 * one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res, count = 0;

	res = n ^ m;

	while (res)
	{
		count++;
		res &= (res - 1);
	}

	return (count);
}
