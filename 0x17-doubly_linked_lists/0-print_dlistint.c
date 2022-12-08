#include "lists.h"

/**
 * print_dlistint - prints the elements in the linked list
 * @h: pointer to the head node
 *
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	int count = 0;

	if (h == NULL)
		return (0);

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}
	return (count);
}
