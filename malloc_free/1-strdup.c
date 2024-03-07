#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copies string into new memory
 * @str: string
 * Return: ponter to copied string or NULL
 */
char *_strdup(char *str)
{
	char *pointer;
	unsigned int size;
	int index;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{}

	pointer = malloc((size + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (index = 0; pointer[index] == '\0'; index++)
		pointer[index] = str[index];

	return (pointer);
}
