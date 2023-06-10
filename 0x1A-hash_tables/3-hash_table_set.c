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
	hash_node_t *curr_item, *new_item = create_item((char *)key, (char *)value);
	unsigned long int i, index;

	if (!new_item)
		return (0);
	if (!ht)
	{
		free_item(new_item);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	curr_item = ht->array[index];
	if (curr_item == NULL)
	{
		/* means the key doesnt exist */
		for (i = 0; ht->array[i] != NULL; i++)
			;
		if (i == ht->size)
		{
			/* table is full */
			free_item(new_item);
			return (0);
		}
		ht->array[index] = new_item;
	}
	else
	{
		if (strcmp(curr_item->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			ht->array[index] = new_item;
			new_item->next = curr_item;
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

/**
 * free_item - frees an item of the hash table.
 * @item: pointer to the item to be freed.
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
