#include <stdio.h>
#include "main.h"

/**
 * _putchar - this writes the character c to stdout
 * @c:character to print
 *code by sue
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
