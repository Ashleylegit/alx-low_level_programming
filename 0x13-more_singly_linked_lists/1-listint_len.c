#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list
 * @h: list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes += 1;
		h = (*h).next;
	}

	return (num_of_nodes);
}
