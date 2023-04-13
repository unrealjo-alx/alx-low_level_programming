#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: amount of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
