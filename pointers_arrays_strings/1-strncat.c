#include "main.h"

/**
 * *_strncat - concatenates two strings up to certain limit
 * @n: given limit
 * @src: source string to concatenate
 * @dest: target string
 * Return: resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size;
	int limit;
	int path = 0;

	for (size = 0; dest[size] != '\0'; size++)
	{}

	for (limit = 0; src[limit] != '\0' && path < n; limit++, path++)
	{
		dest[size] = src[limit];
		size++;
	}
	dest[size++] = '\0';
	return (dest);
}
