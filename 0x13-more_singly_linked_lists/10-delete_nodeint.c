#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to address of the head of linked list.
 * @index: is the index of the node, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	tmp = *head;

	while (i++ < index - 1 && tmp != NULL)
		tmp = tmp->next;

	if (tmp == NULL)
		return (-1);

	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
