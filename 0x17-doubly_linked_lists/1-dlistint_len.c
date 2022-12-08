#include "lists.h"

/**
 * dlistint_len -prints the number of elements
 * @h: pointer to head
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = (dlistint_t *)h;
	while (temp)
	{
		temp = temp->next;
		count += 1;
	}
	return (count);
}
