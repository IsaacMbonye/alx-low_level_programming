#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

/**
 * add_nodeint - adds a node at beginning of a list
 * @n: integer
 *
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	new_node = (listint_t *) malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = head;
	head = new_node;	
	return (&head);
	
}



