#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert new node at given index
 * @h: input pointer to head of dlistint_t list
 * @idx: input index or n to add new node at, starting from 0
 * @n: input data to add for new node
 * Return: the node at index or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int c = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (h == NULL)
		return (new_node);
	if (idx == 0)
	{
		new_node->next = (*h);
		if ((*h) != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL)
	{
		c++;
		if (c == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
