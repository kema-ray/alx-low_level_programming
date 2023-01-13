#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp;

	if (h == NULL)
		return (NULL);
	temp = *h;
	i = 0;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
