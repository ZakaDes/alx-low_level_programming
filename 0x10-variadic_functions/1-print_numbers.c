#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: the string to print from
 * @n: the number of ints passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
