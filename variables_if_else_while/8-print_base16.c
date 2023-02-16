#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 48;

char letters = 97;

for (num = 48; num < 58; num++)
{
putchar(num);
}
for (letters = 97; letters < 103; letters++)
{putchar(letters);
}
putchar('\n');
return (0);
}
