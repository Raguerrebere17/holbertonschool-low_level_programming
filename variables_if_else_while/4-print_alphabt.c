#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q')
{
putchar(ch);
}
else if (ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
