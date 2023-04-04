#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head:It is a pointer to the first element in the list of linked list
 * @n:This is a data to insert in the new element in a linked list
 * DO NOT COPY TLC
 * Return:Should return a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *temp = *head;

	newlist = malloc(sizeof(listint_t));
	if (!newlist)
	return (NULL);

	newlist->n = n;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = newlist;

	return (newlist);
}

