#include "main.h"

/**
 * *string_toupper - changes lowercase letters to uppercase.
 * @s: string to change
 * Return: new string.
 */
char *string_toupper(char *s)
{
	char *pointer = s;

	for (; *pointer != '\0'; pointer++)
	{
		if (*pointer >= 'a' && *pointer <= 'z')
			*pointer -= 32;
	}

	return (s);
}
