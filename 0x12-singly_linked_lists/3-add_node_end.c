#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to address head of list
 * @str: a string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *trv;

	if (head == NULL)
		return (NULL);

	tmp = (list_t *)malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = strlen(str);

	/* If head is null then the last element will be the firs one */
	if ((*head) == NULL)
	{
		(*head) = tmp;
		tmp->next = NULL;
		return (*head);
	}
	trv = (*head);
	while (trv->next != NULL)
		trv = trv->next;

	tmp->next = trv->next;
	trv->next = tmp;

	return (*head);
}
