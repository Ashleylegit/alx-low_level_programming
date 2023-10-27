#include "main.h"

/**
 * set_bit - This code defines a C function, `set_bit`, which modifies the 
 * value of a specific bit at a given index in an unsigned long integer `n` 
 * by performing a bitwise XOR operation, setting the bit to 1, and returning 
 * 1. If the index is out of range, it returns -1.
 * @n: pointer
 * @index: int
 * Return: (-1 or 1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
