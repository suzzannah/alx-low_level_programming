#include "function_pointers.h"

/**
  * int_index - the integer
  * @array: first array
  * @size: the size of integer
  * @cmp: m
  * code by sue
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (k < size)
			{
				if (cmp(array[k]))
					return (k);

				k++;
			}
		}
	}

	return (-1);
}
