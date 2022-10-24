#include "lists.h"
/**
 * print_listint -function to print list element
 * @h: address of head node
 * Return: number of elements
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
