#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string pointer
 * @s2: Second string pointer
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
