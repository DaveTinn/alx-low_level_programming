#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: the key to look for
 *
 * Return: value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *key_value;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	key_value = ht->array[idx];
	while (key_value != NULL)
	{
		if (strcmp(key_value->key, key) == 0)
		{
			return (key_value->value);
		}
		key_value = key_value->next;
	}
	return (NULL);
}
