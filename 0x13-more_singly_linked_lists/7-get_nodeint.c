#include "lists.h"

/**
 * get_nodeint_at_index - This function retrieves the node at a specified 
 * index in a linked list of integers by traversing the list and returning 
 * the node's pointer, or it returns NULL if the index is out of bounds.
 * @head: pointer
 * @index: node
 * Return: NULL or head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
