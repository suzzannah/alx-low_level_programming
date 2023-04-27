#include <stdio.h>

/**
 * main - this prints the number of arguments passed into it.
 * @argc: no of argument count
 * @argv: array of arguments
 * code by sue
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
