#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings into new memory
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to new memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int size1;
	int size2;
	int index1;
	int index2 = 0;

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}

	pointer = malloc((size1 + size2) * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (index1 = 0; s1[index1] != '\0'; index1++)
		pointer[index1] = s1[index1];

	for (index2 = 0; s2[index2] != '\0'; index1++, index2++)
		pointer[index1] = s2[index2];

	return (pointer);
}
