#include "function_pointers.h"

/**
 * print_name -this is a function that prints a name.
 * @name: name given
 * @f: the function of name
 * code by sue
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
