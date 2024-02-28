#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: given string to cut in half
 * Return: void
 */
void puts_half(char *str)
{
	char *pointer = str;
	int size = 0;
	int limit;

	while (str[size] != '\0')
		size++;

	limit = size / 2;
	pointer += limit;

	if (size % 2 == 1)
	{
		pointer++;
		size--;
	}

	while (limit < size)
	{
		_putchar(*pointer);
		pointer++;
		limit++;
	}
	_putchar('\n');
}
