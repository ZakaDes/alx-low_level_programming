#include "main.h"

/**
 * *_strcat - concatenate two string.
 * @dest: char pointer
 * @src: second char pointer
 * Return: res pointer
 */

char *_strcat(char *dest, char *src)
{
        int lenght = 0;
        int count;
        int i = 0;

        while (dest[lenght] != '\0')
        {
                lenght++;
        }


        for (count = lenght; src[i] != '\0'; count++)
        {
                *(dest + count) = src[i];
                i++;
        }

        return (dest);
}
