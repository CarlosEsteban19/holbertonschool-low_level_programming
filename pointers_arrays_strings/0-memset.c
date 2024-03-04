#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: number or bytes to fill
 * Return: filled string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int limit;

	for (limit = 0; limit < n; limit++)
	{
		s[limit] = b;
	}
	return (s);
}
