#include "main.h"
/**
 * *_strchr - Locates a character in a string
 * @s: String pointer
 * @c: a character
 * Return: Character located.
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count])
	{
		if (s[count] == c)
		{
			return (s + count);
		}
		count++;
	}
	if (c == 0)
	{
		return (s + count);
	}
	return (0);
}
