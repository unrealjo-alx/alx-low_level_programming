#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list.
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", count);
		else
			printf("[%u] %s\n", count, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
