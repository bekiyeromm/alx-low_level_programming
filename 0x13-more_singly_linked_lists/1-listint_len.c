#include "lists.h"
/**
 * listint_len -printd the number of elements
 * @h: address pass to function
 * Return: number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = malloc(sizeof(listint_t));
	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
