#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - searches a value using the Interpolation
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:the value to search for
 * Return: first index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
