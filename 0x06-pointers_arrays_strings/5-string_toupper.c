#include "main.h"

/**
 * string_toupper - change all lowercase to upper
 * str: string to change
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;
	int length;
	length = 0;

	while (str[length] != '\0')
	{
		length++;


	}

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);

}
