#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * code by sue
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, h, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		h = (i * size) + i;
		l += *(a + h);
	}
	for (j = 0; j < size; j++)
	{
		h = (j * size) + (size - 1 - j);
		r += *(a + h);
	}
	printf("%i, %i\n", l, r);
}
