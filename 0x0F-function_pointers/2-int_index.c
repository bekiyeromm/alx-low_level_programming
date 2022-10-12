#include "function_pointers.h"
/**
 * int_index -prints idex to which matches
 * found
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: -1 if size <= 0 and if no element
 * and returns inder if true
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if ((*cmp)(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
