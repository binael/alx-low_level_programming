#include "lists.h"

/**
 * print_listint_safe - prints a linked list that may have loops
 * @head: the head of the linked list
 *
 * Return: size_t size of the linked list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t size, isLoop = 0;
	const listint_t *node;

	if (head == NULL)
		exit(98);

	node = node_with_loop(head);

	while (head != NULL)
	{
		if (isLoop == 1 && (head == node))
		{
			break;
		}

		if (isLoop == 0 && (head == node))
		{
			isLoop = 1;
		}

		size++;
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
	}

	if (node != NULL)
	{
		printf("-> [%p] %i\n", (void *)node, node->n);
	}
	return (size);
}


/**
 * node_with_loop - gets the node that has the loop
 * @head: the head of the singly linked list
 *
 * Return: the node with the loop
*/
const listint_t *node_with_loop(const listint_t *head)
{
	const listint_t *tortoise, *hare;

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
			break;
		}
	}
	return (tortoise);
}
