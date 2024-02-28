#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: given string to be printed
 * Return: void
 */
void puts2(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		_putchar(*pointer);
		pointer+=2;
	}
	_putchar('\n');
}
