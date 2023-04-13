#include <unistd.h>

/**
 * _putchar -this writes character c to stdout
 * @c: The character to print
 * code by sue
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
