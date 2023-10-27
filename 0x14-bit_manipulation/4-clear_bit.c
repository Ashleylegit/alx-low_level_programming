#include "main.h"

/**
 * clear_bit - This code defines a C function, `clear_bit`, that clears 
 * (sets to 0) the value of a specific bit at a given index in an unsigned 
 * long integer `n` by using a bitwise AND operation with the complement 
 * of a value created by left-shifting 1 to the index position, and it 
 * returns 1. If the index is out of range, it returns -1.
 * @n: pointer
 * @index: int
 * Return: (-1 or 1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
