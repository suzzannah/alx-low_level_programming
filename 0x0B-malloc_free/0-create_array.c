#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array of char c,
 * code by sue
 * @size:size of the array
 * @c: initial value
 * 
 * Return: pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}
