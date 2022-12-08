#include "lists.h"

/**
 * print_dlistint - prints the elements in the linked list
 * @h: pointer to the head node
 *
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count += 1;
		temp = temp->next;
	}
	return (count);
}
