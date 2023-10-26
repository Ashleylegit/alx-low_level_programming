#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node with an integer 
 * value at a given index in a linked list of integers, managing memory 
 * allocation, configuring the node's data and next pointer, and updating 
 * the head pointer as needed.
 * @head: pointer
 * @idx: node index
 * @n: new node
 * Return: (NULL or address)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
