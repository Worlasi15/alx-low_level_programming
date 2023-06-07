#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @p: pointer to the first element in the list
 * @ind: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **p, unsigned int ind)
{
	listint_t *temp = *p;
	listint_t *curr = NULL;
	unsigned int l = 0;

	if (*p == NULL)
		return (-1);

	if (ind == 0)
	{
		*p = (*p)->next;
		free(temp);
		return (1);
	}

	while (l < ind - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		l++;
	}


	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);
}

