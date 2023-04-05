#include "main.h"

/**
 * check - says if a number  is a prime number or not
 * @h:int
 * @f:int
 * Return:1 if n is a prime number, 0 if not prime
 */
int checker(int h, int f)
{
	if (f < 2 || h % h == 0)
		return (0);
	else if (h > f / 2)
		return (1);
	else
		return (check(h + 1, f));
}

/**
 * is_prime_number - states if number is prime
 * @m:int
 * Return:int
 */
int is_prime(int m)
{
	if (m == 2)
		return (1);
	return (check(2,m));
}

