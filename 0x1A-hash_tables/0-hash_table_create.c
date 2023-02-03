#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of an array
  * Return: a pointer to the newly created hash table
  *	    or NULL if something went wrong
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int a;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (a = 0; a < size; a++)
		hash_table->array[a] = NULL;
	return (hash_table);
}
