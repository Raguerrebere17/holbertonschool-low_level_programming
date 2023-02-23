#include "main.h"
/**
 * print_square - Prints a square
 * @size: Size of each side of the square
 * Return: Void function
 */

void print_square(int size)
{
	int l = 0;

	int b = 0;

	if (size > 0)
	{
		while (l < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			b = 0;
			l++;
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
