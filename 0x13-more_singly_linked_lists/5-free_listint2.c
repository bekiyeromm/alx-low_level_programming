#include "lists.h"
/**
  * free_listint2 - frees the list
  * @head: pointer to the node
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = 0;
}
