#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * DO NOT COPY TLC
 */
void free_listint2(listint_t **head)
{
	listint_t *tempfile;

	if (head == NULL)
	return;

	while (*head)
	{
		tempfile = (*head)->next;
		free(*head);
		*head = tempfile;
	}

	*head = NULL;
}
