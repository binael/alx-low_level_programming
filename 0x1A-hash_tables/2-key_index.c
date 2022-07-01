#include "hash_tables.h"

/**
 * key_index - generate a hash table
 * @size: unsigned integer size
 * @key: the key
 *
 * Return: The Hash Table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
