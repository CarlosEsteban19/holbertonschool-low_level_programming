#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || (*cmp) == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]) != 0)
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}
