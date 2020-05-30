#include "hash_tables.h"
/**
  *hash_table_get - function that retrieves value associates
  *@ht: hash table
  *@key: key
  *Return: value associated with the element
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
