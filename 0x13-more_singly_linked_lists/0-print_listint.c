#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);

		num_of_nodes += 1;
		h = (*h).next;
	}

	return (num_of_nodes);
}
