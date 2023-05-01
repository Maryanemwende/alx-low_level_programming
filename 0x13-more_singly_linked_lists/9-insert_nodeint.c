#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to first node in list
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *curr_node;
	unsigned int i;

	curr_node = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode = (listint_t *)malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (curr_node == NULL || curr_node->next == NULL)
			return (NULL);
		curr_node = curr_node->next;
	}
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = curr_node->next;
	curr_node->next = newnode;

	return (newnode);
}
