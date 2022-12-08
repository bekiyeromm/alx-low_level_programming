#include "lists.h"

/**
 * get_dnodeint_at_index - function to return the nth node of a dlistint list
 * @head: input head of dlistint_t list
 * @index: input index or n to return node at, starting from 0
 * Return: the node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
