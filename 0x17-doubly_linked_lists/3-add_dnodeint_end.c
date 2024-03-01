#include "lists.h"

/**
 * _create_node_ - creates a dlistint_t node
 *
 * Return: pointer to the newly created node, or NULL if unsuccessful
 */
dlistint_t *_create_node_(void)
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
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: data of the new node
 *
 * Return: pointer to the new node or NULL if unsuccessful
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current = *head;

	node = _create_node_();
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		node->prev = NULL;

		return (node);
	}

	while (1)
	{


		if (current->next == NULL)
		{
			current->next = node;
			node->prev = current;

			return (node);
		}

		current = current->next;
	}
}
