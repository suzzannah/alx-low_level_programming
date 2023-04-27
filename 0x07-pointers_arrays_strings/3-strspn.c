#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 * code by sue
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int h = 0, m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] != 32)
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[m] == accept[n])
					h++;
			}
		}
		else
			return (h);
	}
		return (h);

}
