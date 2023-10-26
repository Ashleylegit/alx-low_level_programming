#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This function takes the starting point of a linked list, 
 * counts the nodes by iterating through it and incrementing a counter for
 * each node found, and ultimately returns the length of the linked list.
 * @h: pointer
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
