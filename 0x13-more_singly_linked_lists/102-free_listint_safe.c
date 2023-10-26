#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - This function counts the nodes in a linked list 
 * of integers, accounting for the potential presence of a loop, by employing 
 * two pointers to traverse the list and counting the nodes even if a loop 
 * is present.
 * @head: pointer
 * Return: (0)
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *count1, *count2;
	size_t numNodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	count1 = head->next;
	count2 = (head->next)->next;

	while (count2)
	{
		if (count1 == count2)
		{
			count1 = head;
			while (count1 != count2)
			{
				numNodes++;
				count1 = count1->next;
				count2 = count2->next;
			}

			count1 = count1->next;
			while (count1 != count2)
			{
				numNodes++;
				count1 = count1->next;
			}

			return (numNodes);
		}

		count1 = count1->next;
		count2 = (count2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - This function safely frees the memory of a linked list 
 * of integers, considering the potential presence of a loop, and ensures 
 * the head pointer is set to NULL after all nodes have been deallocated.
 * @h: pointer
 * Return: numNodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t numNodes, i;

	numNodes = looped_listint_count(*h);

	if (numNodes == 0)
	{
		for (; h != NULL && *h != NULL; numNodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < numNodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (numNodes);
}
