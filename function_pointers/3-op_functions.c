#include "3-calc.h"
/**
 * op_add - Operator
 * @a: First Value
 * @b: Second Value
 * Return: A + B
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Operator
 * @a: First Value
 * @b: Second Value
 * Return: A - B
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Operator
 * @a: First Value
 * @b: Second Value
 * Return: A * B
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Operator
 * @a: First Value
 * @b: Second Value
 * Return: A / B
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Operator
 * @a: First Value
 * @b: Second Value
 * Return: A % B
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
