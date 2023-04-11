#include "main.h"
#include <stdlib.h>
/**
 * free_grid -	a function that frees a 2 dimensional grid.
 * @grid: a 2 dimensional array.
 * @height: height of the array.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid == NULL || height == 0)
	return (void);

	for (; index < height; index++)
		{
	free(grid[index]);
	}

	free(grid);
}
