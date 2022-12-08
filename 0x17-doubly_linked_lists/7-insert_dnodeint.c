#include "lists.h"
/**
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *temp;

	if (h == NULL)
		return (0);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = (*h);
		if ((*h) != NULL)
			(*h)->prev = new_node;
		(*h) = new_node;
		return (new_node);
	}
	new_node->n = n;
	temp = *h;
	for (i = 0; i < (idx - 1); i++)
	 {
		 temp = temp->next;
	 }
	new_node->n = n;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
	free(new_node);
	return (NULL);
}
