#include "lists.h"
/**
 * add_nodeint_end -adds a node at the end
 * @head: pointer to the new node
 *
 * @n: value to be filled to the new node
 *
 * Return: the address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *lastnode;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		/*//Otherwise, find the last node and add the newNode*/
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = ptr;
	}
	return (lastnode);
}
