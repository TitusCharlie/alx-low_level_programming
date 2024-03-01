#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a list
 * @head: pointer to the head of the list
 * @index: the index to delete
 *
 * Return: 1 if successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *current = *head;

	if (head != NULL)
	{
		if (current == NULL)
			return (-1);

		if (index == 0)
		{
			if ((*head)->next == NULL)
			{
				free(*head);
				*head = NULL;
				return (1);
			}
		}

		for (idx = 0; current != NULL; ++idx)
		{
			if (idx == index)
			{
				if (current->next != NULL)
					current->next->prev = current->prev;

				if (index != 0)
					current->prev->next = current->next;
				else
					*head = current->next;

				free(current);
				return (1);
			}
			current = current->next;
		}
	}
	return (-1);
}
