#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this returns pointer to newly allocated space in mem,
 * code by sue
 * @str:source string
 *
 * Return: returns the pointer to the duplicated string.
 * It returns NULL when insufficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		copy[x] = str[x];
	copy[len] = '\0';

	return (copy);
}
