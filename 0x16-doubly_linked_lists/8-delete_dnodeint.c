#include "lists.h"
/**
  * delete_dnodeint_at_index - delete node at index
  * @head: headp pointer to the linked list
  * @index: index of the node
  * Return: 1 if success
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *deleteNode;
	dlistint_t *temp;

	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		if (index == counter + 1)
		{
			deleteNode = temp->next;
			temp->next = deleteNode->next;
			free(deleteNode);
			return (1);
		}
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		counter++;
	}
	return (-1);
}
