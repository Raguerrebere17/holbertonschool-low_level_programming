#include "variadic_functions.h"
/**
 * sum_them_all - Sum of all numbers
 * @n: First Int
 * Return: The sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int cont;
	int a = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (cont = 0; cont < n; cont++)
		a = a + va_arg(list, const unsigned int);
	va_end(list);
	return (a);
}
