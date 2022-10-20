#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: A linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c += 1;
	}

	return (c);
}
