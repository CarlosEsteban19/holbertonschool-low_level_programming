#include "main.h"

/**
 * print_square - prints a square
 *@size: size of square
 * Return: (int)
 */
void print_square(int size)
{
	int lenght = 0;
	int width;

	if (size > 0)
	{
		while (lenght < size)
		{
			width = size;
			while (width > 0)
			{
				_putchar(35);
				width--;
			}
			_putchar('\n');
			lenght++;
		}
	}
	else
		_putchar('\n');
}
