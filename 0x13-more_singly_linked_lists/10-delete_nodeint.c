#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * DO NOT COPY TLC
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempfile = *head;
	listint_t *currentindex = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempfile);
		return (1);
	}
	while (j < index - 1)
	{
		if (!tempfile || !(tempfile->next))
		return (-1);
		tempfile = tempfile->next;
		j++;
	}


	currentindex = tempfile->next;
	tempfile->next = currentindex->next;
	free(currentindex);

	return (1);
}
