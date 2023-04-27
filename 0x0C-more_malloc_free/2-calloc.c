#include "main.h"

/**
 * _calloc -this allocates memory for an array of @nmemb elements
 *code by sue
 *
 * @nmemb: allocates memory to an array
 * @size: allocates element of size bytes
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		a[x] = 0;
	return (a);
}
