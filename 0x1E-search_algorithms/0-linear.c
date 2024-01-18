#include "search_algos.h"

/**
 * linear_search - searches for a value in an array pf integers using
 * the linear search algorithm
 * @array: the given int array
 * @size: number of elements in int array
 * @value: the value to search for
 *
 * Return: index of value in the array if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
