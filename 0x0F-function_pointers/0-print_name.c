#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: the name to print
 * @f: a pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
