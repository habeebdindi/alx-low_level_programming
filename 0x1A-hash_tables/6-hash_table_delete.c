#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash_table.
 * @ht: the table
 * Return: Doesn't return.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp_fr;

	for (i = 0; i < ht->size && ht; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp_fr = temp;
			temp = temp->next;
			free(temp_fr->key);
			free(temp_fr->value);
			free(temp_fr);
		}
	}
	free(ht->array);
	free(ht);
}
