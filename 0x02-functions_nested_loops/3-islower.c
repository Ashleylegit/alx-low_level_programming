<<<<<<< HEAD
#include "main.h"

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);

}
=======
#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
>>>>>>> f3143e3b16ed10187e8eeeaee1fc72afe6dec219
