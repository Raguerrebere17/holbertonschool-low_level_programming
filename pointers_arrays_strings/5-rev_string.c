#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a String
 * Return: Void Function
 */

void rev_string(char *s)
{
	int a;

	int b;

	char c[1000];

	b = 0;

	for (a = 0; s[a]; a++)
	{
		;
	}
	for (a = a - 1; s[a]; a--)
	{
		c[b] = s[a];
		b++;
	}
	for (a = 0; s[a]; a++)
	{
		s[a] = c[a];
	}
}
