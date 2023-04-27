#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - The op to add
  * @a :first var
  * @b: second var
  * code by sue
  * Return: 0
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - second op
  * @a:first var
  * @b:second var
  * lets do this
  * Return: 0
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - third op
  * @a:first var
  * @b:second var
  * code by sue
  * Return:0
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div -fourth op
  * @a:first var
  * @b:second var
  * code by su
  * Return: 0
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - fifth op
  * @a:first var
  * @b: second var
  * code by sue
  * Return: 0
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
