#include "main.h"
/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: The bytes to search for
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
