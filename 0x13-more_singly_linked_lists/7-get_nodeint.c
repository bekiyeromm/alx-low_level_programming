#include "lists.h"
/**
 * get_nodeint_at_index -searches a node
 *
 * @head: pointer to the node
 * @index: the index of the node, starting at 0
 *
 * Return:if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;

	}
	return (temp);
}
