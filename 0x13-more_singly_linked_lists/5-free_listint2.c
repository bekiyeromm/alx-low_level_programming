#include "lists.h"
/**
  * free_listint2 - frees the list
  * @head: pointer to the node
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while ((*head) != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		free(*head);
		*head = 0;
	}
}
