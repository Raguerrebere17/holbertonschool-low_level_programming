#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: an integer
 * @b: another integer
 * Return: Void function
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
