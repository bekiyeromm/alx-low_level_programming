#include "main.h"
/**
 * free_grid -function to free 2d array
 * @grid: space to be free
 * @height: size of array to be free
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
