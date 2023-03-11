
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int n;

int l;

for (l = 0; l <= 9; l++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
