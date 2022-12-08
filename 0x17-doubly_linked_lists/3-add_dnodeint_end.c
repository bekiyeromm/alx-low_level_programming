#include "lists.h"
/**
 * add_dnodeint_end - adds a node at end in
 * a double linked list
 * @head: pointer to head node
 * @n: node to be added
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *end_node;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	temp = *head;
	if ((*head) == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = end_node;
		end_node->prev = temp;
	}
	return (end_node);

}
