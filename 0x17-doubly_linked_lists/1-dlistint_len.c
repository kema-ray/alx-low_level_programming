#include "lists.h"

/**
  * dlistint_len -  returns the number of elements in a linked dlistint_t list
  * @h: head of the dlistint_t list
  * Return: number of elements in the list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
