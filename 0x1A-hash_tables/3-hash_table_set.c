#include "hash_tables.h"
/**
 * hash_table_set - adds 
 * @ht: hash table
 * @key: is the key
 * @value: value 
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *node;
hash_node_t *n_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
	n_node = create_n_node(key, value);
	if (n_node == NULL)
		return (0);

	ht->array[index] = n_node;
	return (1);
}

/*If key exists, replace value*/
while (node != NULL)
{
	if (strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	node = node->next;
}
/*If key doesn't exist, create new node*/
n_node = create_n_node(key, value);
if (n_node == NULL)
	return (0);

n_node->next = ht->array[index];
ht->array[index] = n_node;
return (1);
}

hash_node_t *create_n_node (const char *key, const char *value)
{
	hash_node_t *n_node;

	n_node = malloc(sizeof(hash_node_t));

	if (n_node == NULL)
		return (NULL);

	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = NULL;

	return (n_node);
}
