#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to head of the list
 */
void free_list(list_t *head)
{
	list_t *mem;

	while (head != NULL)
	{
		mem = head;
		head = head->next;
		free(mem->str);
		free(mem);
	}
}
