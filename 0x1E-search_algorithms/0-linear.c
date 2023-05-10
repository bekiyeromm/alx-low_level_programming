#include "search_algos.h"
/**
 * linear_search - searches a value in an array of integer using Linear search
 * @array: pointer to the first element of the array to search in
 * @size: s the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
