#include "main.h"

/**
 * *_strncpy - copies the string up to certain limit from src, to dest.
 * @src: includes content to be copied
 * @dest: destination of content
 * @n: limit of charatcers to copy
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size;
	int limit;
	int path = 0;

	for (limit = 0, size = 0; src[limit] != '\0' && path < n; limit++, size++)
	{
		dest[size] = src[limit];
		path++;
	}
	return (dest);
}
