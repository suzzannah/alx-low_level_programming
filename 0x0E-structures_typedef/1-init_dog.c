#include "dog.h"

/**
 * init_dog - this initializes a structure of type dog
 * @d:the pointer to structure
 * @name:the pointer to the name of the dog
 * @age: the age of dog
 * @owner:the pointer to owner of dog
 * code
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
