#include "main.h"
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
char *a = "_putchar";

int b = 0;

while (b < 8)
{
putchar(a[b]);
b++;
}
putchar('\n');
return (0);
}
