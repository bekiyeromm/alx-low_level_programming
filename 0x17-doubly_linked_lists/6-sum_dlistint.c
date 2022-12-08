#include "lists.h"

/**
 * sum_dlistint - performs sum for double linked list
 * @head: pointer to head of double linked list
 *
 * Return: sum of double linked list elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
		return (0);
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
