#include "lists.h"
/**
 * list_len - a function that returns
 * he number of elements in a linked list.
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
