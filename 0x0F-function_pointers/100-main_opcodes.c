#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes for this program
 * @a:the address for the main function
 * @n:the number of bytes to print
 * code by sue
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", a[j]);
		if (j < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main -this prints opcodes for its own main function
 * @argc:the number of arguments passed
 * @argv:the array of pointers to arguments
 * code by sue
 * Return: always O
 */
int main(int argc, char **argv)
{
	int h;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	h = atoi(argv[1]);
	if (h < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, h);
	return (0);
}
