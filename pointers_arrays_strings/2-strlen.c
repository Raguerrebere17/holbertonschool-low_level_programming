#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * @s: a string
 * Return: Lenght of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
