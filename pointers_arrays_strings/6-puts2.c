#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: given string to be printed
 * Return: void
 */
void puts2(char *str)
{
	char *pointer = str;
	int size = 0;
	int limit = 0;

	while (str[size] != '\0')
		size++;

	while (limit < size)
	{
		_putchar(*pointer);
		pointer += 2;
		limit += 2;
	}
	_putchar('\n');
}
