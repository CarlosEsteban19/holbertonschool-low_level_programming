#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: (void)
 */
void times_table(void)
{
	char num;
	char multiplo;
	char result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multiplo = 1; multiplo <= 9; multiplo++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * multiplo;
			if (result <= 9)
				_putchar(' ');
			else 
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
