#include "lists.h"

/**
 * sum_listint - This function computes the sum of integer values in a linked
 * list by iterating through the list, accumulating the values, and returning 
 * the total sum.
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
