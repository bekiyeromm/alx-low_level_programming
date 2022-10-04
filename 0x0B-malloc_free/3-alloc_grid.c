#include "main.h"
/**
 * alloc_grid -functionpointer to 2d array
 * @width: width of array
 * @height: height of the array
 *
 * Return: returns array a on succes of NULL on failler
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int *) * height);
	if (a != NULL)
	{
	for (; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				a[i][j] = 0;
			}
		}
		else
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
	}
	return (a);
	}
	else
	{
		return (NULL);
	}
}
