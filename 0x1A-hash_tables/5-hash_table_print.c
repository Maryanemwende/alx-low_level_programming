#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Desc: print the key/value in the order that they appear-
 *	in the array of hash table
 *	Order: array, list. If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned char cmFlag = 0;
	unsigned long int idx;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (cmFlag == 1)
			{
				printf(", ");
			}
			Node = ht->array[idx];
			while (Node != NULL)
			{
				printf("'%s': '%s'", Node->key, Node->value);
				Node = Node->next;
				if (Node != NULL)
					printf(", ");
			}
			cmFlag = 1;
		}
	}
	printf("}\n");
}
