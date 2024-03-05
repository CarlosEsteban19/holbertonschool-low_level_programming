#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: string with chess board
 */
void print_chessboard(char (*a)[8])
{
	int line = 0;
	int size;
	char *pointer;

	for (pointer = a[line]; line < 8; line++)
	{
		for (size = 0; size < 8; size++, pointer++)
		{
			_putchar(*pointer);
		}
		_putchar('\n');
	}
}
