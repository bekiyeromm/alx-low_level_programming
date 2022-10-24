#include "lists.h"
/**
 * add_nodeint -add a node at the begining
 * @head:  pointer to beginig of list
 * @n: data to be added to the node
 * Return: the address of the new element,
 * or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	if (head == NULL)
		return (NULL);
	first = malloc(sizeof(listint_t));
	first->n = n;
	first->next = *head;
	*head = first;
	return (first);
}
