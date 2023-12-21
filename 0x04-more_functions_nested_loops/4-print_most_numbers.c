#include "main.h"

/**
 * print_most_numbers - Entry point
 * Print from 0 to 9 and skip 2 and 4
 * Return the output
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		else
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
