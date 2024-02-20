#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
{
	if (alphabet != 101 && alphabet != 113)
	putchar(alphabet);
	alphabet++;
}
	putchar('\n');
	return (0);
}

