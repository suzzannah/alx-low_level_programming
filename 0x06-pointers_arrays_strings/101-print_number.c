#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int m)
{
	unsigned int x;

	if ( < 0)
	{
		_putchar('-');
		m *= -1;
	}

	x = m;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
