#include "lists.h"

/**
 * find_listint_loop - This function detects and returns the node where a 
 * loop begins in a linked list of integers, using two pointers to traverse 
 * the list and determine the loop's starting point.
 * @head: pointer
 * Return: (NULL or node)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *count1, *count2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	count1 = head->next;
	count2 = (head->next)->next;

	while (count2)
	{
		if (count1 == count2)
		{
			count1 = head;

			while (count1 != count2)
			{
				count1 = count1->next;
				count2 = count2->next;
			}

			return (count1);
		}

		count1 = count1->next;
		count2 = (count2->next)->next;
	}

	return (NULL);
}
