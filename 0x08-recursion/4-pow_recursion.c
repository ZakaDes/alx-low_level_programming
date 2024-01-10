#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: the value to raise
 * @y: the value to ve raised to
 *
 * Return: x raise to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);

	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y -1));
	}
}
