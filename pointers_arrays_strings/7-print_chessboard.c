#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * @a: Row of the array
 * Return: Void Function
 */

void print_chessboard(char (*a)[8])
{
	int b;

	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			if (c == 7)
			{
				_putchar(a[b][c]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[b][c]);
			}
		}
	}
}
