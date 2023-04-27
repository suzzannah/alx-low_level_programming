#include "variadic_functions.h"

/**
 * sum_them_all - this adds all the numbers
 * @n:number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int k;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
