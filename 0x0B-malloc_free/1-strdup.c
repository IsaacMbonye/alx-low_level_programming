#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string which is a 
 * duplicate of string str.
 */

char *_strdup(char *str)
{
	char *a;
	long unsigned int i;
	
	if (str == NULL)
		return (NULL);

	a = malloc (sizeof *str);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < sizeof(a); i++)
		a[i] = str[i];

	return (a);
}


