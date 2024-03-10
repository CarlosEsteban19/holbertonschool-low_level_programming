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
	int total, index;

	if (min > max)
		return (NULL);

	total = max - min;

	pointer = malloc((total + 1) * sizeof(int));
	if (pointer == NULL)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		pointer[index] = min;

	return (pointer);
}
