#include "function_pointers.h"
/**
 * array_iterator - Execute an element of the array
 * @array: Structure
 * @size: Size of the array
 * @action: Function
 * Return: Void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	if (array == NULL || action == NULL)
		return;

	for (cont = 0; cont < size; cont++)
	{
		(*action)(array[cont]);
	}
}
