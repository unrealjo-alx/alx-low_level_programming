#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to address of the head of linked list.
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL,
 * otherwise returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL && index != 0)
	{
		tmp = tmp->next;
		index--;
	}

	if (index != 0)
		return (NULL);

	return (tmp);
}
