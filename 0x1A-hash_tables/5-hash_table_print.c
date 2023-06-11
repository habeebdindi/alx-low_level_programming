#include "hash_tables.h"

/**
 * hash_table_print - print hash table.
 * @ht: hash table head.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i, n = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size && ht; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (n != 0)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			temp = temp->next;
			n++;
		}
	}
	printf("}\n");
}
