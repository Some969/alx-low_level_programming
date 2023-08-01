#include "lists.h"
/**
* add_nodeint_end - adds a node at the end
* @head: pointer
* @n: data
* Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;

	listint_t *temp = *head;

	a = malloc(sizeof(listint_t));

	if (!a)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = a;
	return (a);
}
