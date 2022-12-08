#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at given index
 * @head: input pointer to head of dlistint_t list
 * @index: input index to delete node at, starting from 0
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c = 0;

	if (head == NULL)
		return (-1);

	temp = (*head);
	if (index == 0 && temp != NULL)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (c == index)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		c++;
		temp = temp->next;
	}
	return (-1);
}
