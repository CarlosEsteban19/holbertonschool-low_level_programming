#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of both  diagonals of a square matrix
 * @a: matrix array
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int count;
	int sum1 = 0;
	int sum2 = 0;

	for (count = 0; count < size; count++)
	{
		sum1 += a[count];
		a += size;
	}

	a -= size;

	for (count = 0; count < size; count++)
	{
		sum2 += a[count];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
