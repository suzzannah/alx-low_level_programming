#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -this  returns a pointer to two dimensional integer arrays.
 * @width:the width of array
 * @height: the height of array
 * code by sue
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, a;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (a = 0; a < width; a++)
			array[i][a] = 0;

	return (array);
}
