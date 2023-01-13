#include "lists.h"

/**
  * sum_dlistint -  returns the sum of all the data (n) of a dlistint_t
  * linked list
  * @head: pointer to the head of the list
  * Return: 0 if the list is empty
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
