#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 * @str: a string
 * Return: Void function
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar(10);
}
