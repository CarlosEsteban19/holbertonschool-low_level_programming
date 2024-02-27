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
	while (s[size - 1] >= 0)
	{
		_putchar(s[size]);
		size--;
	}
	_putchar('\n');
}
