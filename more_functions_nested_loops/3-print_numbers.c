#include "main.h"
/**
 * print_numbers - print the numbers, from 0 to 9, followed by a new line
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
char c;

for (c = 48; c < 58; c++)
{
_putchar(c);
}
_putchar('\n');
}
