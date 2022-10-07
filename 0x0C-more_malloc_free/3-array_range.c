#include "main.h"
/**
 * array_range - function to create an array of integers.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the newly created array.
 * if min > max, andif maloc fails returns NULL.
 */
int *array_range(int min, int max)
{
	int *aray;
	int i = 0;

	if (min > max)
		return (NULL);

	aray = malloc(sizeof(*aray) * ((max - min) + 1));
	if (aray == NULL)
		return (NULL);
	while (min <= max)
	{
		aray[i] = min;
		i++;
		min++;
	}
	return (aray);
}
