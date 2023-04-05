#include "main.h"

/**
 * check - say if a number is a prime number or not
 * @a:int
 * @f:int
 * Return:int
 */
int check(int a, int f)
{
	if (f < 2 || f % a == 0)
		return (0);
	else if (a > f / 2)
		return (1);
	else
		return (check(a + 1, f));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}

