#include "function_pointers.h"

/**
 * array_iterator -this is a function that given as a
 * parameter on every element of an array.
 * code by sue
 * @array: the array to execute func on
 * @size: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array && action)
	{
		m = 0;
		while (m < size)
		{
			action(array[m]);
			m++;
		}
	}
}
