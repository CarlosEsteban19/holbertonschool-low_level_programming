#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: lenght of line
 * Return: (int)
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
