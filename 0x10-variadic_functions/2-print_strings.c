#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between strings
 * @n: the number of strings to be passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str)
		{
			printf("%s", str);
		}

		else
		{
			printf("nil");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
