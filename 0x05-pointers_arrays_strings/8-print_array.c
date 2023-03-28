#include <stdio.h>
/**
 * print_array -   prints n elements of an array of integers,
 * followed by a new line.
 * @a: an array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if ((unsigned long int)n > sizeof(*a))
		n = sizeof(*a);
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
