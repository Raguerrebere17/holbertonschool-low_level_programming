#include "function_pointers.h"
/**
 * int_index - Search for an match with the function
 * @array: structure
 * @size: Size of the array
 * @cmp: Function
 * Return: The number of elements passed until the match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cont, res = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (cont = 0; cont < size; cont++)
	{
		if ((*cmp)(array[cont]) == 0)
		{
			res++;
		}
		if ((*cmp)(array[cont]) != 0)
		{
			break;
		}
	}
	if (res == size)
		return (-1);
	return (res);
}
