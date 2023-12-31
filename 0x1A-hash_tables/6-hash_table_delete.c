#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx] != NULL)
		{
			next = ht->array[idx]->next;
			free(ht->array[idx]->key);
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			ht->array[idx] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
