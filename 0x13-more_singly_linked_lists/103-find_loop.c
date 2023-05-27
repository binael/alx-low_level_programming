#include "lists.h"

/**
 * find_listint_loop - finds the node that the loop starts
 * @head: head of the singly linked list
 *
 * Return: node where the loop starts or null
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
	{
		return (NULL);
	}

	tortoise = head;
	hare = head;

	while ((hare != NULL) && (hare->next != NULL))
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			break;
		}
	}

	if (hare == NULL)
	{
		return (NULL);
	}

	tortoise = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;

		if (tortoise == hare)
		{
			return (tortoise);
		}
	}
}
