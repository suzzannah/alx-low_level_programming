#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n:int to return the factorial from
 * Return:int
 */
int factorial(int n)
{
	int sue;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		sue = n * factorial(n - 1);
	}
			return (sue);

}

