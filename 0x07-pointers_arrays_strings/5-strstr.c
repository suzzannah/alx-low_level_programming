#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * code by by sue
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int h = 0, j = 0;

	while (haystack[h])
	{
		while (needle[j] && (haystack[h] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			h++;
			j = 0;
		}
		else
			return (haystack + h);
	}
	return (0);
}
