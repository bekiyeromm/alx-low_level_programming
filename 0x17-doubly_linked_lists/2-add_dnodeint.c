#include "lists.h"
/**
 * add_dnodeint - adds a node at begining in
 * a double linked list
 * @head: pointer to head node
 * @n: node to be added
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (0);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = temp;
	(*head) = temp;
	return (*head);

}
