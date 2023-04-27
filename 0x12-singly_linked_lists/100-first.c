#include <stdio.h>

/**
 *mainb -a function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) mainb()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
