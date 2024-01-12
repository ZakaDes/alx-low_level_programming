#include "main.h"

/**
 * _isalpha - Entry point
 * Check for alphabetic letters
 *
 * @c: the character to be checked
 * Return: 1 if @c is an uppercase or lowercase letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);
	else
		return (0);

	_putchar('\n');

}
