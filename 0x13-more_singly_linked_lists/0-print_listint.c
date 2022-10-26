#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * Return: the number of nodes
 * Format: see example
 * You are allowed to use printf
 */
size_t print_listint(const listint_t *h)
{
	/*int n;*/
	/*listint_t *current_node;*/
	const listint_t *current_node = h;
	int cnt = 0;
	while ( current_node != NULL)
	{
		printf("%d ", current_node->n);
		current_node = current_node->next;
		cnt++;
	}
		 return(cnt);
}



