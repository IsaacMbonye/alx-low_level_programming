#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of character,
 * and initializes it with specific char
 * @size, size of array
 * @c: specific character
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;
	
	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(*b));
	if (b == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		b[i] = c;

	return (b);
}




