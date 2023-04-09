#include "lists.h"
/**
 * list_len - Counts the number of elements
 * @h: Pointer to the structure
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
