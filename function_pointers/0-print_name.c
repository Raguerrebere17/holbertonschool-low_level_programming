#include "function_pointers.h"
/**
 * print_name - Print a name
 * @f: Function pointer
 * @name: Name input
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
