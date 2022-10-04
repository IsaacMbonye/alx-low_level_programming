#include "main.h"
#include <stdlib.h>

/*
 * str_concat - a function that concatates two strings
 * @s2: contents of s2
 * @s1: contents of newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, k, d, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	

	for (i = 0; s1[i] != '\0' ; i++)
		;
	for (k = 0; s2[k] != '\0' ; k++)
		;

	a = malloc((i * sizeof(*s1)) + (k * sizeof (*s2)) + 1);
	if (a == 0)
		return (NULL);

        for (p = 0, d = 0; p < (i + k + 1); p++)
	{
		if (p < i)
			a[p] = s1[p];
		else
			a[p] = s2[d++];
	}

	return (a);
}
