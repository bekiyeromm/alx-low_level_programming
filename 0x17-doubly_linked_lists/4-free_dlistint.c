#include "lists.h"

/**
 * free_dlistint - function to free all elements of a dlistint list
 * @head: input head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
