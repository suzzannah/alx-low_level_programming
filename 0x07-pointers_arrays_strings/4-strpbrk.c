#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 * code by sue
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int w;
		while (*s)
		{
			for (w = 0; accept[w]; w++)
			{
				if (*s == accept[w])
					return (s);
			}
			s++;
		}
	return (NULL);
}
