#include "lists.h"
/**
 * insert_nodeint_at_index -insert at given index
 * @head: pointer node
 * @idx: position at which node will be inserted
 *
 * @n: node value
 *
 * Return: the address of new node 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	ptr = *head;
	if (*head == NULL)
		return (NULL);

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;

	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
