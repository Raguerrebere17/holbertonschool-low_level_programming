#include "main.h"
/**
 * reverse_array - Reverses the content of an array
 * @a: Array pointer
 * @n: Number of elements of the array
 * Return: Void Function
 */

void reverse_array(int *a, int n)
{
	int aux;

	int rev;

	n = n - 1;

	for (aux = 0; aux < n; aux++, n--)
	{
		rev = a[n];
		a[n] = a[aux];
		a[aux] = rev;
	}

}
