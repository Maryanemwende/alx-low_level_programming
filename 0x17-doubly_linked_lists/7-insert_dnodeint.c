#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of the list
 * @idx: index of the list where the new node should be added, Starts at 0
 * @n: value of the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav, *new_node;

	trav = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		trav = trav->next;
		if (trav == NULL)
			return (NULL);
	}
	if (trav->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = trav;
	new_node->next = trav->next;
	trav->next->prev = new_node;
	trav->next = new_node;

	return (new_node);
}
