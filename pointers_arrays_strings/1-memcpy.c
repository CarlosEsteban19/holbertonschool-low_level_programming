#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n:number of bytes to copy
 * Return: updated destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int limit;

	for (limit = 0; limit < n; limit++)
		dest[limit] = src[limit];

	return (dest);
}
