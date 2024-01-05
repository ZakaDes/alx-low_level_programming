#include "main.h"

/**
 * *leet - encode a string into 1337
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char code[] = "aAeEoOtTlL4433007711";

	i = 0;

	while (*(str + i) != '\0')
	{
		for (j = 0; code[j] != '\0'; j++)
		{
			if (str[i] == code[j])
			{
				str[i] = code[j + 10];
				break;
			}
		}
		i++;
	}
	return (str);
}
