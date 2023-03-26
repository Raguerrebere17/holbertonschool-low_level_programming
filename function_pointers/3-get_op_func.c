#include "3-calc.h"
/**
 * get_op_func - Gives the operation
 * @s: Operation
 * Return: Required function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
       	int i = 0;

	while (ops->op && *(ops[i].op) != *s)
	{
	    	i++;
	}
	if (*(ops[i].op) == *s && strlen(s) == strlen(ops[i].op))
	{
	    	return (ops[i].f);
	}
	printf("Error\n");
	exit(99);
}
