#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to first node in list
 */
void free_listint(listint_t *head)
{
	listint_t *mem;

	while (head != NULL)
	{
		mem = head;
		head = head->next;
		free(mem);
	}
}
