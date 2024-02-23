#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: (void)
 */
void jack_bauer(void)
{
	char houra = '0';
	char hourb = '0';
	char mina = '0';
	char minb = '0';

	while (minb <= '9')
	{
		if (houra == '2' && hourb == '4')
		break;
		_putchar(houra);
		_putchar(hourb);
		_putchar(':');
		_putchar(mina);
		_putchar(minb);
		_putchar('\n');
		minb++;
		if (minb == ':')
		{
			minb = '0';
			mina++;
			if (mina == '6')
			{
				minb = '0';
				mina = '0';
				hourb++;
				if (hourb == ':')
				{
					minb = '0';
					mina = '0';
					hourb = '0';
					houra++;
				}
			}
		}
	}
}
