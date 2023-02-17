#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c = 97;

int count = 1;

while (++count <= 11)
{
	for (c = 97; c < 123; c++)
	{
	_putchar(c);
	}
_putchar('\n');
}
}
