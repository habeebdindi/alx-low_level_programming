#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @key: they key.
 * @value: value of @key.
 * @ht: the hash table.
 * Return: 1 on success and 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item = create_item((char *)key, (char *)value);
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_item;

	if (!ht || !new_item)
		return (0);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		/* means the key doesnt exist */
		if (index == ht->size)
		{
			/* table is full */
			free(new_item);
			return (0);
		}
		ht->array[index] = new_item;
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			current_item->next = new_item;
			return (1);
		}
	}
	return (1);
}

/**
 * create_item - creates a new hash table item.
 * @key: key of the item.
 * @value: value of @key.
 * Return: pointer to the newly created item. Or NULL on failure.
 */
hash_node_t *create_item(char *key, char *value)
{
	/* pointer to new hash table item */
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (!item || !key || *key == '\0')
		return (NULL);
	item->key = malloc(strlen(key) + 1);
	if (!item->key)
	{
		free(item);
		return (NULL);
	}

	item->value = malloc(strlen(value) + 1);
	if (!item->value)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
