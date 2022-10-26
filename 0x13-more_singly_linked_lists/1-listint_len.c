#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** 
 * listint_len -  function that returns the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int cnt;
	const listint_t *current_node = h;

        cnt = 0;
	while ( current_node != NULL)
	{
		current_node = current_node->next;
		cnt++;
	}
	return(cnt);
}

