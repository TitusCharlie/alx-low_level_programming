#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * DO NOT COPY TLC
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *tempfile = head;

	while (tempfile && position < index)
	{
		tempfile = tempfile->next;
		position++;
	}

	return (tempfile ? tempfile : NULL);
}
