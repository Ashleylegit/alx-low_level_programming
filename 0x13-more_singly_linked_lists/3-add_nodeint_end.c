#include "lists.h"

/**
 * add_nodeint_end - This function appends a new node with an integer value 
 * to the tail of a linked list, managing memory allocation, configuring the 
 * node's data and next pointer, and updating the head pointer when required.
 * @head: pointer
 * @n: new node
 * Return: NULL or address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
