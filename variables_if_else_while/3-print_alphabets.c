#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alphabet = 97;
	int ALPHABET = 65;

	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 90)
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
