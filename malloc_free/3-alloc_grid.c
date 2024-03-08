#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int index;
	int count;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		array[index] = malloc(width * sizeof(int *));
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
	}

	for (index = 0; index < height; index++)
	{
		for (count = 0; count < width; count++)
		{
			array[index][count] = 0;
		}
	}
	return (array);
}
