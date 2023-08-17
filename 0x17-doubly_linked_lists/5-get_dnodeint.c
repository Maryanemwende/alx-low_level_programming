#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: double pointer to head of the list
 * @index: the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
