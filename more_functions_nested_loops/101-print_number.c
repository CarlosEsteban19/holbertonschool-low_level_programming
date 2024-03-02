#include "main.h"

/**
 * print_number - prints number
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	int divide = 1;
	int zeros = 1;
	int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divide > 9)
	{
		divide *= 10;
	}
	while (divide >= 1)
	{
		num = (n / divide) % 10;

		if (num != 0 || !zeros)
		{
			_putchar(num + '0');
			zeros = 0;
		}
		divide /= 10;
	}
}
