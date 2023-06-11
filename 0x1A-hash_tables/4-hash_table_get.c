#include "hash_tables.h"

/**
 * hash_table_get - gets an item.
 * @ht: the hash table.
 * @key: the key of the item to be retrieved.
 * Return: the item or NULL if the function fails.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item, *temp;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = item = ht->array[index];

	if (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);

		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key))
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
