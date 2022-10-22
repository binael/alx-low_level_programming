#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* struct hash_node_s - Node of the hash table
*
* @key: The key string
* @value: The value corresponding to a key
* @next: A pointer to the next node of the list
*/
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - Hash table data structure
*
* @size: The size of the array
* @array: An array of size @size
*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
unsigned long int hash_djb2(const unsigned char *str);

/**
* hash_table_create - Create a hash table
* @size - Array size
*
* Return: pointer to the hash table created
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return NULL;
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return table;
}

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
* key_index - The index of a key
* @key: The key
* @size: The size of the array
*
* Return: int index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return index;
}

/**
* hash_table_set - updates or sets a value and key in a table
* @ht: the given hash table to update
* @key: the const character key
* @value: the value
*
* Return: 0 if failure or 1 if success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (key == NULL)
	{
		return 0;
	}

	index = key_index((const unsigned char *)key, ht->size);

	ht->array[index] = malloc(sizeof(hash_node_t));

	if (ht->array[index] == NULL)
	{
		return (0);
	}
	ht->array[index]->value = (char *)value;
	ht->array[index]->key = (char *)key;

	return (1);
}

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}
