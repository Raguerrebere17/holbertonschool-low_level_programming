#include "main.h"
/**
 * *_memcpy - Copies memory area
 * @dest: Destiny pointer
 * @src: Source pointer
 * @n: Number of bytes from memory area
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
