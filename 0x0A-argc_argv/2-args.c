#include <stdio.h>

/**
 * main - this prints all the arguments it receives.
 * @argc: argument count
 * @argv:array of  arguments
 * code by sue
 * Return: 0
 */
int main(int argc, char **argv)
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);

	return (0);
}
