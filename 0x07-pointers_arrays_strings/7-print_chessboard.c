#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *code by sue
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int h, j;

	for (h = 0; h < 8; h++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[h][j]);
		}
		_putchar('\n');
	}
}
