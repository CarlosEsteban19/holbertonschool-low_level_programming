#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: lenght of diagonal
 * Return: (int)
 */
void print_diagonal(int n)
{
	int space;
	int line = 0;

	if (n > 0)
	{
		for (; n != 0; n--)
		{
			_putchar(92);
			_putchar('\n');
			line++;
			if (n > 1)
			{
				space = line;
				for (; space > 0; space--)
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
