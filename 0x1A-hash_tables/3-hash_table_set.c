#include "hash_tables.h"

int count = 0;

/**
 * hash_table_set - adds an element to the hash table.
 * @key: they key.
 * @value: value of @key.
 * @ht: the hash table.
 * Return: 1 on success and 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item = create_item(key, value);
	unsigned long int index = key_index(key, size);
	hash_node_t *current_item;

	if (!ht || !new_item)
		return (0);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		/* means the key doesnt exist */
		if (count == ht->size)
		{
			free(new_item);
			return (0); /* table is full */
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
