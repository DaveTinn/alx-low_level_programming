#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *print_ht;
	unsigned long int idx;
	char key_value;

	key_value = 0;
	if (ht == NULL || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		print_ht = ht->array[idx];
		while (print_ht != NULL)
		{
			if (key_value == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", print_ht->key, print_ht->value);
			key_value = 1;
			print_ht = print_ht->next;
		}
	}
	printf("}\n");
}
