#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string
 * @a: String pointer
 * Return: a
 */

char *cap_string(char *a)
{
	int x = 0;

	while (a[x])
	{
		if (a[x] >= 97 && a[x] <= 122)
		{
			if (a[x] == a[0])
			{
				a[x] = a[x] - 32;
			}
			switch (a[x - 1])
			{
				case 10:
				case 9:
				case 32:
				case 44:
				case 46:
				case 59:
				case 33:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:
				case 63:
				a[x] = a[x] - 32;
			}
		}
		x++;
	}
	return (a);
}
