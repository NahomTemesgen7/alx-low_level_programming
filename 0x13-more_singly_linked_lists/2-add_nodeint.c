#include "lists.h"

/**
 * add_nodeint - adds A New node at The beginning Of a linked list
 * @head: pointer to the first node In The list
 * @n: data to insert in that new node
 *
 * Return: pointer to The new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
