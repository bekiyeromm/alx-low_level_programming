#include "lists.h"
/**
 * free_listint -frees alist
 * @head: pointer to the first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
	head = NULL;
}
