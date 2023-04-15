#include "search_algos.h"
/**
 * advanced_binary_fun - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int *advanced_binary_fun(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!size || !array)
		return (NULL);
	for (printf("Searching in array: "); index < size; index++)
		printf("%d%s", array[index], index + 1 == size ? "\n" : ", ");

	index = (size - 1) / 2;
	if (array[index] == value)
	{
		if (index)
			return (advanced_binary_fun(array, index + 1, value));
		return (array + index);
	}
	else if (array[index] > value)
		return (advanced_binary_fun(array, index + 1, value));
	else
		return (advanced_binary_fun(array + index + 1, size - index - 1, value));
}

/**
 * advanced_binary - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *temp = advanced_binary_fun(array, size, value);

	if (!temp)
		return (-1);
	else
		return (temp - array);
}
