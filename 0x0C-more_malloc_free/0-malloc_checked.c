#include "main.h"

/**
 * malloc_checked - thus cause normal process termination
 * code by sue
 * @b: allocated memory
 * lets do this
 * Return:pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
