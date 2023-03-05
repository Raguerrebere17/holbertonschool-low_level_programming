#include "main.h"
/**
 * _strpsn - gets the lenght of a prefix substring
 * @s: segment to return bytes from
 * @accept: bytes to include
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;

	int b;

	int c = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b]; b++)
			{
				if (s[a] == accept[b])
				{
					c++;
				}
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
