#include "main.h"

/**
 * print_last_digit - Entry point
 * Print the last digit of a number
 *
 * @n: the input number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		_putchar(-r + 48);
		return (-r);
	}
	else
	{
		_putchar(r + 48);
		return (r);
	}
}
