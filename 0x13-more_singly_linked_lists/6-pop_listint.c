#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked listint_t list
 * @head: It is a pointer to the first element in the linked list
 * DO NOT COPY TLC
 * Return: the data inside the elements that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempfile;
	int number;

	if (!head || !*head)
	return (0);

	number = (*head)->n;
	tempfile = (*head)->next;
	free(*head);
	*head = tempfile;

	return (number);
}
