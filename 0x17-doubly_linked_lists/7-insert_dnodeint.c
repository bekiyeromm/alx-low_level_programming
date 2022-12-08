#include "lists.h"
/**
 * insert_dnodeint_at_inde - inserts anode at given index
 * @h: pointer to head
 * @idx: index to which value will be inserted
 * 
 * @n: value to be inserted at index idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
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

	while (temp)
	{
		i += 1;
		if (i == idx)
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
