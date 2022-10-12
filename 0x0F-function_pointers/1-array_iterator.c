#include "function_pointers.h"
/**
 * array_iterator -prints an array element
 * @array: arrays to be printed
 * @size: size of array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
