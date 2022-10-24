#include "lists.h"
/**
 * sum_listint -calculates sum
 * @head: pointer to the node
 * Return: the sum of node values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	do {
		sum = sum + head->n;
		head = head->next;
	} while (head != NULL);
	return (sum);
}
