#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root
 * find - Function to find
 * @a: First value to find
 * @b: Second value to find
 * @n: A number
 * Return: Square Root
 */
int find(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b != a && b < a)
	{
		return (find(a, b + 1));
	}
	return (1);
}
int _sqrt_recursion(int n)
{
	int a = 1;

	if (n / a != a)
	{
		a = find(n, 1);
	}
	if (n / a == a)
	{
		return (a);
	}
	return (-1);
}
