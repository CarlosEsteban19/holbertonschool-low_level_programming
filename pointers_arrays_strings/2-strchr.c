#include "main.h"
/**
 * *_strchr -locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
