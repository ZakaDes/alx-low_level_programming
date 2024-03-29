#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: the binary string
 *
 * Return: converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow, total;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	for (pow = 1, total = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			total += pow;
	}

	return (total);


}
