#include "main.h"

/**
 * _isdigit - checks for digit character
 * @c: number to be checked
 * Return: (int)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
