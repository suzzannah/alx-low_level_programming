#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 * @n: bytes of the memory area pointed to by @s
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w = 0;

	while (w < n)
	{
	s[w] = b;
	w++;
	}

	return (s);
}
