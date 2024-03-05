#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: bytes to look for
 * Return: match
 */
char *_strpbrk(char *s, char *accept)
{
	int size;

	while (*s)
	{
		for (size = 0; accept[size]; size++)
		{
			if (*s == accept[size])
				return (s);
		}
		s++;
	}
	return ('\0');
}
