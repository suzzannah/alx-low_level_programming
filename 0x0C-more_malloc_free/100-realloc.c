#include "main.h"

/**
 * _realloc - this reallocates a memory using malloc and free
 * code by sue
 * @ptr: pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space
 * @new_size: the new size, of the new memory block
 * a
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int m, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (m = 0; m < n; i++)
		p[m] = oldp[m];
	free(ptr);
	return (p);
}
