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
	int limit;

	for (limit = 0; src[limit] && limit < n; limit++)
		dest[limit] = src[limit];

	for (; limit < n; limit++)
		dest[limit] = '\0';

	return (dest);
}
