#include "lists.h"

/**
 * dlistint_len -  Give the number of linkes associeted.
 * @h:is a list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
