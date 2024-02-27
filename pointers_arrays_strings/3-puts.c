#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int print = 0;

	while (str[print] != '\0')
	{
		_putchar(str[print]);
		print++;
	}
	_putchar('\n');
}
