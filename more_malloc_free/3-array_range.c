#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointer;
	int index;

	if (min > max)
		return (NULL);

	pointer = malloc(1 + max * sizeof(int));
	if (pointer == NULL)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		pointer[index] = min;

	return (pointer);
}
