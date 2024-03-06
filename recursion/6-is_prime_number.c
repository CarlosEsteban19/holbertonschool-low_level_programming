#include "main.h"
/**
 * mathbot - checks if number is prime or not
 * @mult: number that compares to prime numbers
 * @target: given number to check
 * Return: 1 if prime, 0 if not.
 */
int mathbot(int mult, int target)
{
	if (mult == target / 2)
		return (1);

	if (target % mult == 0 || target < 2)
		return (0);

	return (mathbot(mult + 1, target));
}
/**
 * is_prime_number - checks if number is a rpime number
 * @n: number to evaluate
 * Return: 1 if number is prime, 0 is not.
 */
int is_prime_number(int n)
{
	return (mathbot(2, n));
}
