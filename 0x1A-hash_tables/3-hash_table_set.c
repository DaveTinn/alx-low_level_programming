#include "hash_tables.h"
/**
 * create_hash_node - creates a new hash node
 * @key: the key
 * @value: value associated withe the key
 *
 * Return: new hash node or NULL
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	return (newNode);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update the key/value to
 * @key: the key but not an empty string
 * @value: value associated with the key
 *
 * Return: 1 if Success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_node, *curr;
	unsigned long int idx;
	char *upd_key;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			upd_key = strdup(value);
			if (upd_key == NULL)
			{
				return (0);
			}
			free(curr->value);
			curr->value = upd_key;
			return (1);
		}
		curr = curr->next;
	}
	h_node = create_hash_node(key, value);
	if (h_node == NULL)
	{
		return (0);
	}
	h_node->next = ht->array[idx];
	ht->array[idx] = h_node;
	return (1);
}
