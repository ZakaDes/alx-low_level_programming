#include "main.h"

/**
 * _sqrt_recursion -  a function that returns the natural
 *  square root of a number
 * @n: int
 * @v: the square root
 * Return: the int
 */

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));

}

/**
 * square - find the natural square root of a number
 * @n: int
 * @v: square root
 *
 * Return: the square root
 */

int square(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (square(n, v + 1));
	}
	else
	{
		return (-1);
	}

}
