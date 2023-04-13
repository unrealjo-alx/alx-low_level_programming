#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory
 * for an array, using malloc.
 * @nmemb: number of elements .
 * @size: size in bytes of each element.
 * Return: a pointer to the allocated memory,
 * otherwise NULL in case of failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	return (arr);
}
