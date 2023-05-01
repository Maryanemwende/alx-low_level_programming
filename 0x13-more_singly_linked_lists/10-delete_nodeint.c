#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *
 * @head: pointer to first node in list
 * @index: index of the node that should be deleted. Starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *traverser;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		traverser = *head;
		*head = (*head)->next;
		free(traverser);
		return (1);
	}

	curr_node = *head;

	for (i = 0; i < index - 1 && curr_node != NULL; i++)
		curr_node = curr_node->next;

	if (curr_node == NULL || curr_node->next == NULL)
		return (-1);

	traverser = curr_node->next;
	curr_node->next = traverser->next;
	free(traverser);
	return (1);
}
