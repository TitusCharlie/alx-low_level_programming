#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 * DO NOT COPY TLC
 */
void free_listint(listint_t *head)
{
	listint_t *tempfile;

	while (head)
	{
		tempfile = head->next;
		free(head);
		head = tempfile;
	}
}
