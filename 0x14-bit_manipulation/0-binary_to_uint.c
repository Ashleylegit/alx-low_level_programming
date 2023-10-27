#include "main.h"

/**
 * binary_to_uint - This code defines a C function, `binary_to_uint`, 
 * that converts a binary string into an unsigned integer by iterating 
 * through the string, converting each digit to its decimal equivalent, 
 * and accumulating them while considering positional values, returning 
 * the resulting integer.
 * @b: pointer
 * Return: (0 or 1)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
