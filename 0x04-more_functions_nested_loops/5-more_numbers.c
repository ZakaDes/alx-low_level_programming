#include "main.h"

/**
 * more_numbers - Entry point
 * Print from 0 to 14 ten times
 * Return: the output
 */

void more_numbers(void)
{
	int out;
	int inn;

	for (out = 1; out <= 10; out++)
	{
		for (inn = 0; inn <= 14 ; inn++)
		{
			if (inn > 9)
			{
			_putchar((inn / 10) + '0');

			}
			_putchar((inn % 10) + '0');
		}
		_putchar('\n');
	}
}
