#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: int
 * @...: variable number
 *
 * Return: (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list value;
	unsigned int index, sum = 0;

	va_start(value, n);

	for (index = 0; index < n; index++)
		sum += va_arg(value, int);

	va_end(value);

	return (sum);
}
