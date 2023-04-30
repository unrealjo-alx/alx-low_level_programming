#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to address of the head of linked list.
 * @n: an integer
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *trv;

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
	trv = (*head);

	while (trv->next != NULL)
		trv = trv->next;

	tmp->next = trv->next;
	trv->next = tmp;

	return (*head);
}
