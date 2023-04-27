#include "main.h"

/**
 * check - checks for  square root
 * @m:int
 * @n:int
 * This was tough
 * Return: int
 */
int check(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (check(m + 1, n));
}

/**
 * _sqrt_recursion - returns natural square root
 * @x: integer to find sqrt of
 * Return: natural square root
 */
int _sqrt_recursion(int x)
{
	if (x == 0)
		return (0);
	return (check(1, x));
}

