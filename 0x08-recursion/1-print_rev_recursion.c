#include "main.h"
/**
 * _print_rev_recursion - This prints a string in reverse.
 * @s: is the string being printed.
 * code by sue
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

