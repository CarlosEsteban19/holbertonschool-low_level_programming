#include "main.h"
/**
 * *_strchr -locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: first occurence of character
 */
char *_strchr(char *s, char c)
{
	int size;

	for (size = 0; s[size] != '\0' && s[size] != c; size++)
	{}
	if (s[size] == c)
		return (s + size);
	else
		return ('\0');
}
