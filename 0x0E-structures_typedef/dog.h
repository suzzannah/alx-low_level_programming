#ifndef DOG
#define DOG

/**
 * struct dog -this is the dog class
 * code by sue
 * @name: Name of the dog
 * specifically
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */

struct dogi
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_a;

dog_a *new_dog(char *name, float age, char *owner);

void free_dog(dog_a *d);

#endif
