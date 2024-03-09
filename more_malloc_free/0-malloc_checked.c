#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: amount of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
