#include "lists.h"
/**
 * pop_listint -deletes the head node
 * @head: head node pointer
 * Return:returns the deleted node
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;

	(*head) = (*head)->next;
	free(temp);
	return (data);
}
