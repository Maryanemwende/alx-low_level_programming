#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, can not be an empty string
 * @value: value associated with the key
 *	must be duplicated. must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int elem, index;
	char *valueCopy;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	elem = key_index((const unsigned char *)key, ht->size);
	for (index = elem; ht->array[index]; index++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = valueCopy;
			return (1);
		}
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valueCopy);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = valueCopy;
	newNode->next = ht->array[elem];
	ht->array[elem] = newNode;
	return (1);
}
