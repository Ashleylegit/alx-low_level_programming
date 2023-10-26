#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list of integers in 
 * place by iteratively updating the next pointers, and it returns the new 
 * head of the reversed list.
 * @head: pointer
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
