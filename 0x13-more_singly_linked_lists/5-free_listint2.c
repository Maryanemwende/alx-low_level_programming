#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to first node in list
 */
void free_listint2(listint_t **head)
{
	listint_t *mem;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		mem = *head;
		*head = (*head)->next;
		free(mem);
	}

	*head = NULL;
}
