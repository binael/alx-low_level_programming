#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: list head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *my_list;

	if (head)
	{
		my_list = *head;
		while ((temp = my_list) != NULL)
		{
			my_list = my_list->next;
			free(temp);
		}
		*head = NULL;
	}
}
