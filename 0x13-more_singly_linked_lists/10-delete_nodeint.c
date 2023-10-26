#include "lists.h"

/**
 * delete_nodeint_at_index - This function removes a node at a specified index 
 * in a linked list of integers, including the handling of removing the first 
 * node, updating the head pointer, and freeing the memory associated with 
 * the removed node.
 * @index: node index
 * Return: (-1 or 1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
