#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: a string
 * Return: Void function
 */

void print_rev(char *s)
{
	int count;

	for (count = 0; s[count]; count++)
	{
		;
	}

	for (count = count - 1; s[count]; count--)
	{
		_putchar(s[count]);
	}
	_putchar(10);
}
