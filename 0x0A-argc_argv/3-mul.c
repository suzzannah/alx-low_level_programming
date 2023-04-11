#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the two numbers.
 * @argc:the argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", a * y);

	return (0);
}
