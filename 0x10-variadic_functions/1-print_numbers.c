#include "variadic_functions.h"

/**
 * print_numbers - this prints numbers followed by new line
 * @n: the number of parameters
 * @separator:this separates two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(ap, int));
		if (m < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
