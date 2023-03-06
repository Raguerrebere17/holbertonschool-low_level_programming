#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the
 * power of y
 * @x: value of x to be raised
 * @y: power to rise x
 * Return: x**y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
