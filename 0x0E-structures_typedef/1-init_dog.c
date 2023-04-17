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
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
}
