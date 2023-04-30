#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: pointer to address of the head of linked list.
 * @n: an integer
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = (listint_t *)malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	if ((*head) == NULL)
	{
		tmp->next = NULL;
		(*head) = tmp;
		return (*head);
	}

	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
