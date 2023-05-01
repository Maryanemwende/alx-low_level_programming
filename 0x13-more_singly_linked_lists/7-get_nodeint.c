#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: pointer to first node in list
 * @index: index of the node, starting at 0
 * Return: the nth node, if it does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr_node;
	unsigned int count = 0;

	curr_node = head;

	while (curr_node != NULL)
	{
		if (count < index)
		{
			count++;
			curr_node = curr_node->next;
		}
	}

	if (count == index)
		return (curr_node);
	else
		return (NULL);
}
