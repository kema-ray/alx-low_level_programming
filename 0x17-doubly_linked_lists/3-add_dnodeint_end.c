#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to the head of the dlistint_t list
  * @n: integer for the new node to contain
  * Return: address of the new node
  *	Otherwise - if the function fails - NULL
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
