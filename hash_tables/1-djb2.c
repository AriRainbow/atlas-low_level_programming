#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of djb2 algorithm
 * @str: String used to generate hash value
 *
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash; /* store hash value */
	int c; /* store current character */

	hash = 5381; /* initialize hash */
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 * c */
	}
	return (hash); /* calculated hash value */
}
