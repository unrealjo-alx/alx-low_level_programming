#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: array's width
 * @height: array's height
 * Return: a pointer to created array, and NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width == 0 || height == 0)
	return (NULL);

	arr = (int **)malloc(width * sizeof(int *));

	if (arr == NULL)
	{
	free(arr);
	return (NULL);
	}

	for (i = 0; i < width; i++)
	{
	arr[i] = (int *)malloc(width * sizeof(int *));

	if (arr[i] == NULL)
	{
	free(arr[i]);
	return (NULL);
	}

	for (j = 0; j < height; j++)
	arr[i][j] = 0;
	}

	return (arr);
}
