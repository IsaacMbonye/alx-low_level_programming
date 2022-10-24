#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		printf("[0] (nil)");
	
	/* iterating through the singled linked list list_t, to get the number of nodes*/
	count = 0;

   
	while (h != NULL)
	{
	        h = h->next;
		count++;
	}
	return (count);
}




