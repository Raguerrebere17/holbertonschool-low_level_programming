#include "main.h"
/**
 * times_table - Prints the 9 times table starting with 0
 * row = row, column = column, d = digit
 * Return: 9 times table
 */
void times_table(void)
{
int row, column, d;

for (row = 0; row <= 9; row++)
{
	_putchar('0');
	_putchar(44);
	_putchar(32);
	for (column = 1; column <= 9; column++)
	{
	d = (row * column);
		if ((d / 10) > 0)
		{
		_putchar((d / 10) + '0');
		}
		else
		{
		_putchar(32);
		}
	_putchar((d % 10) + '0');

	if (column < 9)
	{
	_putchar(44);
	_putchar(32);
	}
	}
	_putchar('\n');
	}
}
