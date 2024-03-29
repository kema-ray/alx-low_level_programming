#include "lists.h"

/**
  * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
  * @head: a pointer to the head on the dlistint_t list
  * @n: integer for the new node to contain
  * Return: The address of the new node
  * Otherwise - if the function fails - NULL
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
