#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: Name of the array
 * @size: Size of the array
 * Return: Void Function
 */

void print_diagsums(int *a, int size)
{
	int b = 0;

	int c = size - 1;

	int sum1 = 0;

	int sum2 = 0;

	while (b <= (size * size))
	{
		sum1 = sum1 + a[b];
		b = b + size + 1;
	}
	while (c < (size * size - 1))
	{
		sum2 += a[c];
		c = c + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
