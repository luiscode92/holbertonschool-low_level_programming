#include "hash_tables.h"

/**
  *hash_table_print - function that print a ht
  *@ht: hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int counter = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		if (tmp)
		{
			while (tmp)
			{
				counter++;
				tmp = tmp->next;
			}
		}
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		if (tmp)
		{
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				if (--counter)
					printf(", ");
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
