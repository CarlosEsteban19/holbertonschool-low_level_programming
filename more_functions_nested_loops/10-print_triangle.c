#include "main.h"

/**
 * print_triangle - prints a triangle using hashtags
 * @size: size of triangle in lines
 * Return: (void)
 */
void print_triangle(int size)
{
	int hashtags;
	int space;

	if (size > 0)
	{
		for (hashtags = 1; hashtags <= size; hashtags++)
		{
			for (space = size - hashtags; space > 0; space--)
				_putchar(' ');

			while (space < hashtags)
			{
				_putchar(35);
				space++;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
