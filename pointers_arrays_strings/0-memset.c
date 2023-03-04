#include "main.h"
/**
 * *_memset - Fills memory with a constant byte
 * @s: char pointer
 * @b: a char
 * @n: unsigned int
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
