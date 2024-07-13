#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key
 * @size: Size of the array of the hash table
 *
 * Description:
 *
 * Return: Index the key/value pair should be stores in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value; /* store hash value */
	unsigned long int index; /* store index in the array */

	hash_value = hash_djb2(key); /* generate hash value using djb2 */
	index = hash_value % size; /* map hash value to index in array bounds */

	return (index); /* calculated index */
}
