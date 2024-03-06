#include "main.h"
/**
 * mathbot - multiplies a base number by itself until result is target number
 * @mult: base number to multiply by itself
 * @target: target number
 * Return: base number found or -1 if none found.
 */
int mathbot(int mult, int target)
{
	if (mult == target / 2 || target < 0)
		return (-1);
	if (mult * mult == target)
		return (mult);

	return (mathbot(mult + 1, target));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square if possible
 * Return: square root of number, or -1 if no root is found.
 */
int _sqrt_recursion(int n)
{
	return (mathbot(1, n));
}
