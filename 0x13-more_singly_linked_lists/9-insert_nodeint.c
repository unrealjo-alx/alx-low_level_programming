#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to address of the head of linked list.
 * @idx: is the index of the node, starting at 0
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trvs = (*head), *tmp;
	unsigned int i = 0;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	while (i < idx - 1 && trvs != NULL)
	{
		i++;
		trvs = trvs->next;
	}

	if (trvs == NULL)
		return (NULL);

	tmp = (listint_t *)malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = (*head);
		(*head) = tmp;
		return (tmp);
	}

	tmp->next = trvs->next;
	trvs->next = tmp;

	return (tmp);
}
