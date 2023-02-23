#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: A number
 * Return: void function
 */

void print_diagonal(int n)
{
	int a = 0;

	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
