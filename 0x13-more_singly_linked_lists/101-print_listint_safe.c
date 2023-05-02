#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list
 *
 * @head: pointer to first node in the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr_node = head;
	const listint_t *prev_node = NULL;

	size_t count = 0;

	while (curr_node)
	{
		printf("[%p] %d\n", (void *)curr_node, curr_node->n);
		count++;

		if (curr_node < prev_node)
		{
			printf("-> [%p] %d\n", (void *)curr_node->next, curr_node->next->n);
			break;
		}

		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (!curr_node)
		return (count);
	exit(98);
}
