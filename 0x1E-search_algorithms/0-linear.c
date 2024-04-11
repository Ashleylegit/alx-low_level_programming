#include "search_algos.h"

/**
  * linear_search - A function that searches for a value in an array
  * of integers using the Linear search algorithm
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in the array
  * @value: The value to search for
  *
  * Return: First index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
