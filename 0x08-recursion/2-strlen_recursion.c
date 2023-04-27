#include "main.h"
/**
 * _strlen_recursion - Will returns the length of the string.
 * @s: string to be measured.
 * code by suzzy
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int sue = 0;

	if (*s)
	{
		sue++;
		sue += _strlen_recursion(s + 1);
	}

	return (sue);
}

