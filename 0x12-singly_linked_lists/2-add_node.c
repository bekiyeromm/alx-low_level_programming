#include "lists.h"
/**
 * add_node -adds node at the begining
 * @head: head pointer
 * @str:node to be added
 * Return: the address of the new element
 * or null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *tmp;

	if (str == NULL)
		return (NULL);

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	len = strlen(str);
	tmp->len = len;
	return (tmp);
}
