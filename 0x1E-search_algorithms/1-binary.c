#include "search_algos.h"
/**
 * binary_search - search a value in a sorted array of integers using Binary
 * @array: pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the number of elements in array
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;
	int *a = array;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
		if (a[mid] == value)
		{
			return (mid);
		}
		else if (a[mid] < value)
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
