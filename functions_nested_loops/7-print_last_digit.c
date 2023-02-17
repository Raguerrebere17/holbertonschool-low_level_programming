#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @num : is a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < 0)
	{
	digit *= -1;
	}
_putchar(digit + '0');

return (digit);
}
