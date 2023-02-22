#include "main.h"

/**
 * _isupper - Returns 0 if c is uppercase, returns 0 otherwise
 * @c: A letter
 * Return: 1 if @c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
