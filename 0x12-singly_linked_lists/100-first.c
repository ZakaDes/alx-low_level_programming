#include "lists.h"

void main_print(void) __attribute__((constructor));

/**
 * main_print - a function that prints a string before the main function is
 * exercuted
 *
 */


void main_print (void)
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
