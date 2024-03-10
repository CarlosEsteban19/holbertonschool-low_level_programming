#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int index, total;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	pointer = malloc(total);
	if (pointer == NULL)
		return (NULL);

	for (index = 0; index < total; index++)
		pointer[index] = 0;

	return (pointer);
}
