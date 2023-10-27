#include "main.h"

/**
 * get_endianness - This code defines a C function, `get_endianness`, that 
 * detects the system's endianness (byte order) by examining the value of 
 * the lowest-addressed byte in memory after storing the integer 1, 
 * returning 1 for little-endian or 0 for big-endian.
 * Return: (0 or 1)
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
