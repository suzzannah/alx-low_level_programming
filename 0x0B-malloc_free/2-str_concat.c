#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -this  concatenates two strings.
 * @s1:our  first string
 * @s2:our  second string
 * code by sue
 * Return: pointer to  newly allocated space in mem
 * followed by the contents of s2,
 * null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int x, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		result[x] = s1[x];
	for (j = 0; j < len2; j++, x++)
		result[x] = s2[j];
	result[len] = '\0';

	return (result);
}
