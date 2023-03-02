#include "main.h"
/**
 * *string_toupper - Changes lowecase letters to uppercase
 * @a: Char pointer
 * Return: Always 0 (Success)
 */

char *string_toupper(char *a)
{
	int rail = 0;

	while (a[rail])
	{
		if (a[rail] >= 97 && a[rail] <= 122)
		{
			a[rail] = a[rail] - 32;
		}
		rail++;
	}
	return (a);
}
