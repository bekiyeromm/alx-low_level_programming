#include "lists.h"

int check_for_palindrome(dlistint_t *head);

/**
 * main - determines if multiplication of two 3 digit number is palindrome
 * Return: 0 if successful
 */
int main(void)
{
	dlistint_t *head, *palindromes;
	int product = 0, holder = 0, result = 0, a = 999, b = 999;

	palindromes = NULL;
	for (a = 999; a > 99; a--)
	{
		for (b = 999; b > 99; b--)
		{
			product = a * b;
			head = NULL;
			/* printf("product = %d\n", product); */
			holder = product;
			while (product / 10 != 0)
			{
				add_dnodeint(&head, (product % 10));
				product /= 10;
			}
			add_dnodeint(&head, (product % 10));
			/* print_dlistint(head); */
			result = check_for_palindrome(head);
			if (result == 1)
			{
				printf("%d * %d = %d\n", a, b, holder);
				add_dnodeint(&palindromes, holder);
			}
			free_dlistint(head);
		}
	}
	while (palindromes->next != NULL)
	{
		if (palindromes->n < palindromes->next->n)
			delete_dnodeint_at_index(&palindromes, 0);
		else
			delete_dnodeint_at_index(&palindromes, 1);
	}
	printf("Largest product of two 3-digit numbers that's a palidrome: \n");
	print_dlistint(palindromes);
	free_dlistint(palindromes);
	return (0);
}

/**
 * check_for_palindrome - function to check if number is a palindrome
 * @head: input head of doubly linked list
 * Return: 1 if successful, -1 if failed
 */

int check_for_palindrome(dlistint_t *head)
{
	dlistint_t *start, *end;
	int count = 1;

	start = head;
	end = head;
	while (end->next != NULL)
	{
		count++;
		end = end->next;
	}
	if ((count % 2) == 0)
	{
		while (start->next != end)
		{
			if (start->n == end->n)
			{
				start = start->next;
				end = end->prev;
			}
			else
				return (-1);
		}
		if (start->n == end->n)
			return (1);
	}
	else
	{
		while (start != end)
		{
			if (start->n == end->n)
			{
				start = start->next;
				end = end->prev;
			}
			else
				return (-1);
		}
		start = start->next;
		if (start->n == end->n)
			return (1);
	}
	return (-1);
}
