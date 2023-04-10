#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - the entry point
 * @dest: param ->a string
 * @src: param -> a string
 * @n: param ->a number
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
