#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array using jump searhc
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index = 0;
	size_t step = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index = index + step;
	}

	step = index - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, index);
	index = index >= size ? size - 1 : index;
	while (step <= index)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}
