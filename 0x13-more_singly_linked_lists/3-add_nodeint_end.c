#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: list head
 * @n: integer n
 *
 * Return: address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *temp;

	(void)temp;

	new_list = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_list;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_list;
	}

	return (*head);
}
