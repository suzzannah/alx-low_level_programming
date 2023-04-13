#include "main.h"

/**
 * string_nconcat - function that concatenates 2 strings.
 * code by sue
 * @s1:our first char
 * @s2: our secound char
 * @n: unsigned int
 * oh
 * Return: return NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, h, z;
	char *s;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}
	if (s2 == NULL)
	{
		h = 0;
	}
	else
	{
		for (h = 0; s2[h]; ++h)
		;
	}
	if (h > n)
		h = n;
	s = malloc(sizeof(char) * (x + h + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < h; z++)
		s[z + x] = s2[z];
	s[x + h] = '\0';
	return (s);
}
