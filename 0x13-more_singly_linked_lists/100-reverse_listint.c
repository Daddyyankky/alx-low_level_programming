#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: point to first node in list
 *
 * Return: points to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
