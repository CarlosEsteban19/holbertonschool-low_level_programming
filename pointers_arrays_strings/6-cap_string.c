#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: given string
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	char *p = s;

	if (*p >= 'a' && *p <= 'z')
		*p -= 32;

	while (*p != '\0')
	{
		if (*p == ')' || *p == '{' || *p == '}' || *p == ' ' || *p == '\n')
		{
			p++;
			if (*p >= 'a' && *p <= 'z')
				*p -= 32;
		}

		else if (*p == ',' || *p == '	' || *p == ';' || *p == '.')
		{
			p++;
			if (*p >= 'a' && *p <= 'z')
				*p -= 32;
		}

		else if (*p == '!' || *p == '?' || *p == '"' || *p == '(')
		{
			p++;
			if (*p >= 'a' && *p <= 'z')
				*p -= 32;
		}

		else
			p++;
	}
	return (s);
}

