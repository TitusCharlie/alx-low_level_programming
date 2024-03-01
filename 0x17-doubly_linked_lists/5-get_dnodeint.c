#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to get, starting from 0
 *
 * Return: pointer to the node, NULL if the node not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head != NULL)
	{
		if (idx == index)
			return (head);

		head = head->next;
		idx++;
	}

	return (NULL);
}
