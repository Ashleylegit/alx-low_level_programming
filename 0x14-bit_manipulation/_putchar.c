#include "main.h"
#include <unistd.h>

/**
 * _putchar - This code includes a header file and defines a function 
 * `_putchar` that writes a single character to the standard output and 
 * returns the number of characters written.
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
