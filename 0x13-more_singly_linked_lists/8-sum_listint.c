#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * DO NOT COPY TLC
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempfile = head;

	while (tempfile)
	{
		sum += tempfile->n;
		tempfile = tempfile->next;
	}

	return (sum);
}
