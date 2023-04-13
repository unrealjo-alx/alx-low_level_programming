#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: starting value (included)
 * @max: ending value (included)
 * Return: a pointer to the allocated array,
 * otherwise NULL in case of failure.
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
