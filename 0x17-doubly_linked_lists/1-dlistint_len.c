#include "lists.h"

/**
 * dlistint_len -prints the number of elements
 * @h: pointer to head
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
