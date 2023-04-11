#include <stdio.h>
#include <stdlib.h>

/**
 * main - this prints the min number of coins to make change
 * code by sue
 * @argc:the  argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, num;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	num = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					num+= total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			num++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", num);
	return (0);
}
