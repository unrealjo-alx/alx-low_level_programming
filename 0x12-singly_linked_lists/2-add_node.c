#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to address head of list
 * @str: a string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = (list_t *)malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	if ((*head) == NULL)
	{
		(*head) = tmp;
		tmp->next = NULL;
		return (*head);
	}

	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
