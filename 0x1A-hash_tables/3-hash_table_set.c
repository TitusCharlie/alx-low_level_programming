#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key and can not be an empty string
 * @value: value associated with the key.
 * must be duplicated and can be an empty string
 *
 * Return: 1 on success and zero otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t *));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
