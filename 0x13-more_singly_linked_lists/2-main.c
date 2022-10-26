#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_noteint(&head, 0);
	add_noteint(&head, 1);
	add_noteint(&head, 2);
	add_noteint(&head, 3);
	add_noteint(&head, 4);
	add_noteint(&head, 98);
	add_noteint(&head, 402);
	add_noteint(&head, 1024);
	print_listint(head);
	return (0);
}


