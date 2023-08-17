#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav;

	while (head)
	{
		trav = head->next;
		free(head);
		head = trav;
	}
}
