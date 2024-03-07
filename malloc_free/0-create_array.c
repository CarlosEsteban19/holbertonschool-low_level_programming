#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size
 * @c: character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	char *otro;

	if (size == 0)
		return (NULL);

	pointer = malloc((size + 1) * sizeof(char));
	otro = pointer;

	if (pointer == NULL)
		return (NULL);

	while (*otro == '\0')
	{
		*otro = c;
		otro++;
	}
	return (pointer);
}
