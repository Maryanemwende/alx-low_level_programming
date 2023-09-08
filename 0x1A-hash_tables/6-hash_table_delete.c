#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *Node, *trav;
	hash_table_t *head = ht;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			Node = ht->array[idx];
			while (Node != NULL)
			{
				trav = Node->next;
				free(Node->key);
				free(Node->value);
				free(Node);
				Node = trav;
			}
		}
	}
	free(head->array);
	free(head);
}
