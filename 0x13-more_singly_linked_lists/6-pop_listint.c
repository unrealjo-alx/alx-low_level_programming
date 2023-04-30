#include "lists.h"
/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to address of the head of linked list.
 * Return: the head node’s data,
 * otherwisef if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head);
	int num;

	if (head == NULL || (*head) == NULL)
		return (0);

	num = tmp->n;
	tmp = tmp->next;

	free((*head));
	(*head) = tmp;

	return (num);
}
