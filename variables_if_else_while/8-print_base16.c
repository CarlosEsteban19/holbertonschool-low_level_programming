#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hexnum = 48;
	int hexchar = 97;

	while (hexnum <= 57)
	{
		putchar(hexnum);
		hexnum++;
	}
	while (hexchar <= 102)
	{
		putchar(hexchar);
		hexchar++;
	}
	putchar('\n');
	return (0);
}
