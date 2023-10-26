#include "lists.h"

/**
 * free_listint - This function is designed to release the memory allocated 
 * for a linked list of integers by iteratively freeing each node's memory 
 * and updating the head pointer until the entire list is deallocated.
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
