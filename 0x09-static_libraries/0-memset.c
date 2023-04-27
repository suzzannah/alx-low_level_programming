#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset -this is entry point
 * @s: param -> the string
 * @b: param -> the string
 * @n: param -> the number
 * Return: result
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
