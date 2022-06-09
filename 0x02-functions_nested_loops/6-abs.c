<<<<<<< HEAD
#include "main.h"

/**
 * _abs - return abs value
 * @n : number to check
 * Return:0 or 1
 */

int _abs(int n)
{

return (n >= 0 ? n : n * -1);

}
=======
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: n is an integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
>>>>>>> f3143e3b16ed10187e8eeeaee1fc72afe6dec219
