#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, to dest.
 * @src: includes content to be copied
 * @dest: destination of content
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *pointdest = dest;
	char *pointsrc = src;
	int size = 0;
	int limit = 0;

	while (src[size] != '\0')
		size++;

	while (limit < size)
	{
		*pointdest = *pointsrc;
		pointdest++;
		pointsrc++;
		limit++;
	}
	return (dest);
}
