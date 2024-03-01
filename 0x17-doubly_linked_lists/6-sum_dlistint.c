#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the computed sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
