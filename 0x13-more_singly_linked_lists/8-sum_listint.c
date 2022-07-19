#include "lists.h"

/**
 * sum_listint - return sum of all lists in linked list
 * @head: pointer to head pointer of linked list
 * Return: sum or if list is empty returns 0
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}

	return (sum);
}
