#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key
 * @key: const unsigned char
 * @size: unsigned long int
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
