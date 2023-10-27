#include "main.h"

/**
 * get_bit - This code defines a C function, `get_bit`, that extracts and 
 * returns the value (0 or 1) of a specific bit at a given index in an 
 * unsigned long integer `n` using bitwise operations, and it returns -1 
 * if the index is out of range.
 * @n: int
 * @index: int
 * Return: (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
