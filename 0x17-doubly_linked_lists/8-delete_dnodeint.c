#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a
 * linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp = *head;
	i = 0;
	while (temp != NULL)
	{
		if (i == index - 1)
		{
			tmp = temp->next;
			temp->next = temp->next->next;
			if (tmp->next != NULL)
				temp->next->prev = temp;
			free(tmp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
	return (1);
}
