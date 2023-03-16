#include <stdio.h>
/**
 * main - printing out sizes o data types in c
 * code by susan
 * Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int m;
	float f;

	printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(x));
	printf("size of a int: %lu byte(s)\n",(unsigned long)sizeof(y));
	printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(z));
	printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(m));
	printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
