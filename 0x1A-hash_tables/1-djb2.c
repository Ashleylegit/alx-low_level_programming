#include "hash_tables.h"

/**
 * hash_djb2 - A hash function that implements the djb2 algorithm
 * @str: const unsigned char
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int k;

	hash = 5381;
	while ((k = *str++))
	{
		hash = ((hash << 5) + hash) + k;
	}

	return (hash);
}
