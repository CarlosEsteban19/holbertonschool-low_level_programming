#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 * Return: void.
 */
void print_rev(char *s)
{
	char *size = s;
	int print;

	while (*size)
	size++;

	print = size - s;

	while (s[print] >= 0)
	{
		_putchar(s[print]);
		print--;
	}
	_putchar('\n');
}
