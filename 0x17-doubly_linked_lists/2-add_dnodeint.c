#include "lists.h"

/**
 * add_dnodeint - function to add node to the beginning of a dlistint_t list
 * @head: input pointer to head of dlistint_t list
 * @n: input data to insert in new node
 * Return: pointer to newly added element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	/* malloc out size of newnode and, if successful, set as single node */
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	/* check for no list (head == NULL) & set newnode to be only element */
	if (head == NULL)
	{
		head = &newnode;
		return (newnode);
	}
	/* check for empty list (*head == NULL) & set newnode to only element */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/* set newnode to point to start of list & head to point to newnode */
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
