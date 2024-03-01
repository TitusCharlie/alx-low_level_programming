#include "lists.h"

/**
 * create_node_ - creates a dlistint_t node
 *
 * Return: pointer to the newly created node, or NULL if unsuccessful
 */
dlistint_t *create_node_(void)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->next = malloc(sizeof(dlistint_t));
	if (node->next == NULL)
	{
		free(node);
		return (NULL);
	}

	node->prev = malloc(sizeof(dlistint_t));
	if (node->prev == NULL)
	{
		free(node->next);
		free(node);
		return (NULL);
	}

	return (node);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: the data of the node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = create_node_();
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
		node->next = NULL;
	else
	{
		(*head)->prev = node;
		node->next = *head;
	}

	*head = node;
	return (node);
}
