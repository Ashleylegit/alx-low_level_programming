#include "lists.h"

/**
 * free_listint2 - This function is responsible for releasing the memory 
 * occupied by a linked list of integers while ensuring the head pointer 
 * is set to NULL after all nodes have been freed.
 * @head: pointer
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
