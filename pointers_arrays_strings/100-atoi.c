#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: given string
 * Return: integer from given string.
 */
int _atoi(char *s)
{
	int index = 0;
	int num = 0;
	int sign = 1;

	while (s[index] < '0' || s[index] > '9')
	{
		if (s[index] == '-')
			sign = sign * -1;
		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		num = num * 10 + sign * (s[index] - '0');
		index++;
	}

	return (num);
}
