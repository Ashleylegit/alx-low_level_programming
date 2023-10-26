#include "lists.h"

/**
 * add_nodeint - This function adds a new node with an integer value to the
 * start of a linked list, managing memory allocation, setting node data and
 * next pointers, and updating the list's head pointer.
 * @head: pointer
 * @n: new node
 * Return: NULL or address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
