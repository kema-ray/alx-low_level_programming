#include "hash_tables.h"

/**
  * key_index - function that gives you the index of a key
  * @key: key to be hashed
  * @size: size of the array
  * Return: index of the key
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
