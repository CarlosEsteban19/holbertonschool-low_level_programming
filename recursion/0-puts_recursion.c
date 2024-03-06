#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		if (*s == '\0')
			_putchar('\n');
		_puts_recursion(s);
	}
}
