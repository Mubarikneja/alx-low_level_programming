#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size 
 * Return: hash table , NULL .
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *h_table;

	if (size == 0)
		return (NULL);

	h_table = malloc(sizeof(h_table_t));

	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);

}
