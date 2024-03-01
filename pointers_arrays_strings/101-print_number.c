#include "main.h"

/**
 * print_number - prints number
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	if (n > 0)
	{
		if (n >= 1000)
		{
			_putchar((n / 1000) + '0');
			_putchar(((n % 1000) / 100) + '0');
			_putchar((((n % 1000) % 100) / 10) + '0');
		}
		else if (n >= 100)
		{
			_putchar((n / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
		}
		else if (n >= 10)
			_putchar((n / 10) + '0');

		_putchar((n % 10) + '0');
	}
	if (n < 0)
	{
		_putchar('-');
		if (n <= -1000)
		{
			_putchar(((n * -1) / 1000) + '0');
			_putchar((((n * -1) % 1000) / 100) + '0');
			_putchar(((((n * -1) % 1000) % 100) / 10) + '0');
		}
		else if (n <= -100)
		{
			_putchar(((n * -1) / 100) + '0');
			_putchar((((n * -1) % 100) / 10) + '0');
		}
		else if (n <= -10)
			_putchar(((n * -1) / 10) + '0');

		_putchar(((n * -1) % 10) + '0');
	}
	if (n == 0)
		_putchar('0');
}
