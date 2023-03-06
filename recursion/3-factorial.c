#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: A number
 * Return: -1 if n is lower than 0, 1 if n is 0, else !n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
