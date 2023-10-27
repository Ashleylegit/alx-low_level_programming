#include "main.h"

/**
 * print_binary - This code defines a C function, `print_binary`, which 
 * recursively prints the binary representation of an unsigned long integer 
 * `n` by extracting its bits and converting them to characters ('0' or '1'),
 * effectively printing the binary representation in reverse order.
 * @n: int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
