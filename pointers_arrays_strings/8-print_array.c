#include "main.h"
/**
 * print_array - Prints an array
 * @a: An array
 * @n: Number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	putchar(10);
}
