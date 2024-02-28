#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int size = 0;
	int limit;
	char ditto;
	char *pointer = s;

	while (s[size] != '\0')
		size++;

	limit = size / 2;

	while (size != limit)
	{
		ditto = s[size - 1];
		s[size - 1] = *pointer;
		*pointer = ditto;
		size--;
		pointer++;
	}
}
