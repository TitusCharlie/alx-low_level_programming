#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_data_struct;

	hash_data_struct = malloc(sizeof(hash_table_t));
        if (hash_data_struct == NULL)
                return (NULL);

	hash_data_struct->size = size;
	hash_data_struct->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_data_struct->array == NULL)
		return (NULL);
	return (hash_data_struct);
}
