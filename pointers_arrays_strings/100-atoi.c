#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string pointer
 * Return: fil or 0
 */

int _atoi(char *s)
{
	unsigned int fil = 0;
	int a = 1;
	int b = 0;

	while (s[b])
	{
		if (s[b] >= 48 && s[b] <= 57)
		{
			fil = fil * 10 + (s[b] - 48);
		}
		if (s[b] >= 48 && (s[b] <= 57 && s[b + 1] < 48 || s[b] > 57))
		{
			break;
		}
		if (s[b])
		{
			a = a * -1;
		}
		b++
	}
	fil = fil * a;
	if (fil != 0)
	{
		return (fil);
	}
	else
	{
		return (0);
	}
}
