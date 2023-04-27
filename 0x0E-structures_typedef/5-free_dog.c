#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -this frees dogs
 * @d:the pointer to dog to free
 * code by sue
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
