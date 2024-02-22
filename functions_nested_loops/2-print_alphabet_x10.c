#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int repeat = 0;

	while (repeat < 10)
	{
		alphabet = 'a';
		while(alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		repeat++;
	}
}
