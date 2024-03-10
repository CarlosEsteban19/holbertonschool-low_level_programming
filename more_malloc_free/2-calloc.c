#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	unsigned int *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (index = 0; pointer[index] == '\0'; index++)
		pointer[index] = 0;

	return (pointer);
}
