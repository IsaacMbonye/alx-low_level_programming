#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *string_nconcat - a function that concatenates two strings
 *@s1: string 1
 *@s2: strng 2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i, j, p, d;
	
	for (i = 0; (i < s1[i]) != '\0'; i++)
		;
	for (j =0; (j < s2[j]) != '\0'; j++)
		;
	
	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)));
	if (a == NULL)
	{
		a = "";

	}

	n = sizeof(s2[0]);
	for (p = 0, d = 0; p < (i + j + 1); p++)
	{
		if (n < strlen(s2))
		{
			a[p] = s1[p] + n;
		}
		if (n >= strlen(s2))
		{
			a[p] = s1[p] + s2[d++];
		}
	
	}

	free(a);
	return (a);
		
}

