#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer to head of list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trav;

	trav = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (trav == NULL)
			return (-1);
		trav = trav->next;
	}
	if (trav == *head)
	{
		*head = trav->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		trav->prev->next = trav->next;
		if (trav->next != NULL)
		{
			trav->next->prev = trav->prev;
		}
	}
	free(trav);
	return (1);
}
