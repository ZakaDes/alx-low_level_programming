#include "main.h"

/**
 * print_sign - Entry point
 * Print the sign of a number
 *
 * @n: the input number
 * Return: 1 and print + if @n is greater than 0
 * 0 and print 0 if it is equal or -1 and print - if less than 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else if (n > 0)
	{
		_putchar(43);
		return (1);

	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
