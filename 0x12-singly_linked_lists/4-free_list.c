#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to address of the head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
