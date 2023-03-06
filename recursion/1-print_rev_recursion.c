#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: A string
 * Return: Void function
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
		_putchar(10);
	}
}
