#include "lists.h"
/**
 * print_listint -function to print list element
 * @h: address of head node
 * Return: number of elements
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	/*temp = malloc(sizeof(listint_t));*/
	/* i comment above b/c it creates memory likage*/
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
