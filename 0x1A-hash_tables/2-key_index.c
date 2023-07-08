#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: the hash key
 * @size: size of the array of the hash table
 *
 * Return: index of the hash generated value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	unsigned long int index;

	index = value % size;
	return (index);
}
