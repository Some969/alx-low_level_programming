#include "lists.h"
/**
* add_nodeint - adds a new node
* @head: pointer
* @n: newdata
* Return: pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;
	a = malloc(sizeof(listint_t));

	if (!a)
		return (NULL);
	a->n = n;
	a->next = *head;
	*head = a;
	return (a);
}
