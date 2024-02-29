#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: target string
 * @src: source string
 * Return: concatenated dest string
 */
char *_strcat(char *dest, char *src)
{
	int size;
	int limit;

	for (size = 0; dest[size] != '\0'; size++)
	{}

	if (dest[size] == '\0')
	{
		dest[size] = ' ';
		size++;
	}

	for (limit = 0; src[limit] != '\0'; limit++)
	{
		dest[size] = src[limit];
		size++;
	}

	return (dest);
}
