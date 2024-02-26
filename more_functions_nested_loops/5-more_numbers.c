#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: (void)
 */
void more_numbers(void)
{
	int num, rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
