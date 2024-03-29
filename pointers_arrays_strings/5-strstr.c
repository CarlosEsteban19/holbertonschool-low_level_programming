#include "main.h"
/**
 * *_strstr - locates a substring.
 * @haystack: string to search through
 * @needle: target substring
 * Return: beggining of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pointer = haystack;
		char *target = needle;

		while (*pointer == *target && *target != '\0')
		{
			pointer++;
			target++;
		}
		if (*target == '\0')
			return (haystack);
	}
	return ('\0');
}
