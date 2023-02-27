#include "main.h"
/**
 * _puts - Prints a string
 * @str: a string
 * Return: Void function
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
