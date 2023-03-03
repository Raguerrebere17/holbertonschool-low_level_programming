#include "main.h"
/**
 * *leet - Encodes a string into 1337
 * @a: string pointer
 * Return: a
 */

char *leet(char *a)
{
	char *lett = "AaEeLlOoTt";
	char num[10] = "4433110077";
	int countlet = 0;
	int count = 0;

	while (a[count])
	{
		while (lett[countlet])
		{
			if (a[count] == lett[countlet])
			{
				a[count] = num[countlet];
			}
			countlet++;
		}
		countlet = 0;
		count++;
	}
	return (a);
}
