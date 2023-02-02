#include "hash_tables.h"

/**
 * key_index- Function that returns the key index of an array
 * @key: key
 * @size: size of the array
 * Return: key value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
