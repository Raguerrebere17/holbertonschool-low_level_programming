#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 48;

for (num = 48; num < 58; num++)
{
putchar(num);
if (num < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
