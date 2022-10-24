#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef LIST_T_H
#define LIST_T_H
#define LIST_T


/*size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void list_t *add_node(list_t **head, const char *str);
void list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);*/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif
/* list_t * {aka struct list_s *}*/
