#include "lists.h"
/**
 * sum_listint -calculates sum
 * @head: pointer to the node
 * Return: the sum of node values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	do {
		temp = temp->next;
		sum = sum + temp->n;
	} while (temp->next != NULL);
	return (sum);
}
