#include "main.h"

/**
 * flip_bits - This code defines a C function, `flip_bits`, which computes 
 * the count of bit flips needed to transform one unsigned long integer `n` 
 * into another `m`. It uses bitwise XOR to find the differing bits and 
 * counts them through a loop, returning the count.
 * @n: int
 * @m: int
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
