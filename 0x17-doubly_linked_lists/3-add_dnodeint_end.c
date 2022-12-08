#include "lists.h"

/**
 * add_dnodeint_end - function to add node to the end of a dlistint_t list
 * @head: input pointer to head of dlistint_t list
 * @n: input data to insert in new node
 * Return: pointer to newly added element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (head == NULL)
	{
		head = &newnode;
		return (newnode);
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	newnode->prev = temp;
	temp->next = newnode;
	return (newnode);
}
