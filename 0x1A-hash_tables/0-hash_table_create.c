#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table
 *@size: array size
 *Return: newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->array = calloc(size, sizeof(hash_node_t *));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	return (new);
}
