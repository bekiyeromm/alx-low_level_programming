#include "lists.h"

/**
 * print_list - Prints all of the elements of a linked list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i += 1;
		h = h->next;
	}
	return (i);
}
