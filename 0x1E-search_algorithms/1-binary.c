#include "search_algos.h"
/**
 * binary_search -searches for a value in an array of integers-
 * using the binary search algorithm
 * @array:pointer to the first element of the array to search in
 * @size:is the number of elements in array
 * @value: is the value to search for
 * Return:the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0, right = size - 1, mid;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
