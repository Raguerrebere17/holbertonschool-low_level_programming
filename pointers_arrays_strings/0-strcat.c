#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: A string
 * @src: Other string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
