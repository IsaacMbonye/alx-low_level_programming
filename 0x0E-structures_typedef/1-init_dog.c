#include <stdlib.h>
#include "dog.h"

/**
 * A function that initialize a variable of type struct dog
 */

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog *));
	if (d == NULL)
		return (1);
	free(d);
	return (0);
}

