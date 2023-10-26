#include "lists.h"

/**
 * pop_listint - This function removes the initial node from a list of 
 * integers, updates the head pointer, frees the memory associated with 
 * the removed node, and returns the data from the removed node.
 * @head: pointer
 * Return: (0 or ret)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
