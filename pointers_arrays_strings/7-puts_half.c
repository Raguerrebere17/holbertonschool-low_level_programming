#include "main.h"
/**
 * puts_half - Prints a half of a string
 * @str: a string
 * Return: Void Function
 */

void puts_half(char *str)
{
	int a = 0;

	int b = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		b = (a + 1) / 2;
	}
	else
	{
		b = a / 2;
	}
	while (str[b] != '\0')
	{
		_putchar(str[b]);
			b++;
	}
	_putchar(10);

}
