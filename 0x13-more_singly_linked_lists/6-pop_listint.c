#include "lists.h"

/**
 * pop_listint - it deletes the head node of a linked list
 * @head: a pointer to which  the first element in the linked list
 *
 * Return: the data inside the elements that has been  deleted,
 * or 0 if the list was empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
