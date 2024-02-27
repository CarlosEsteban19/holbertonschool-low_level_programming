#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 * Return: void.
 */
void print_rev(char *s)
{
	int size = 0;
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
		size++;
	}
	while (size > 0)
	{
		_putchar(s[size - 1]);
		size--;
	}
	_putchar('\n');
}
