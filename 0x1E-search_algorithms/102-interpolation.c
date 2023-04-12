#include "search_algos.h"
/**
 * interpolation_search - searches a value using the Interpolation
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:the value to search for
 * Return: first index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		pos = low + (((double)(high - low) / (
			array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
return (-1);
}

