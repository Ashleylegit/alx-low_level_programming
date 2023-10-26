#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function accepts the starting point of a linked list,
 * prints the integer values of its nodes, and provides the count of nodes in
 * the list, making it useful for both displaying the list's content and 
 * determining its size.
 * @h: pointer
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
