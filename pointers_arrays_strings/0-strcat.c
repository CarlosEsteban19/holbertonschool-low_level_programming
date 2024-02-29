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
	}

	for (limit = 0; src[limit] != '\0'; limit++)
	{
		dest[size] = src[limit];
		size++;
	}

	dest[size++] = '\0';
	return (dest);
}
