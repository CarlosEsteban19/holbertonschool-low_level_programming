#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: given string
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	char *pointer = s;

	while (*pointer != '\0')
	{
		if (*pointer == ',' || *pointer == '	' || *pointer == ';' || *pointer == '.' || *pointer == '!' || *pointer == '?' || *pointer == '"' || *pointer == '(' || *pointer == ')' || *pointer == '{' || *pointer == '}' || *pointer == ' ' || *pointer == '\n')
		{
			pointer++;
			if (*pointer >= 'a' && *pointer <= 'z')
				*pointer -= 32;
		}

		else
			pointer++;
	}
	return (s);
}

