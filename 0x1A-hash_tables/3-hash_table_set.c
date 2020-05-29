#include "hash_tables.h"

/**
  *hash_table_set - function that adds an element to a hash table
  *@ht: the hash table
  *@key: the key
  *@value: the value associated with the key
  *Return: 1 if success, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;

	if (!ht || !key)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);

	if (!(new->key))
	{
		free(new);
		return (0);

	}
	new->value = strdup(value);
	if (!(new->value))
	{
		free(new);
		free(new->key);
		return (0);
	}

	add_node(ht, new);
	return (1);
}

/**
  *add_node - function that adds a node to the hash table
  *@ht: the hash table
  *@node: the node
  */

void add_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	index = key_index((unsigned char *)node->key, ht->size);
	tmp = ht->array[index];

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp)
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	else
	{
		node->next = NULL;
		ht->array[index] = node;
	}
}




