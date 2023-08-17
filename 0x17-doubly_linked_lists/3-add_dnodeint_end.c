#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: double pointer to head of dlistint_t
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	end_node = *head;
	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new_node;
	new_node->prev = end_node;

	return (new_node);
}
