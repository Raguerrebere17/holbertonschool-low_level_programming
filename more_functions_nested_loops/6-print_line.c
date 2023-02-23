#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: A number
 * Return: Void function
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
