#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - prints an array of string
 * @tab: the array to print
 *
 * Return: Nothing
 */

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] !=NULL; i++)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code of ALX School Student code
 *
 * Return: 1 if an error occured, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("     ALX School       #cisfun     ");
	if (tab == NULL)
	{
		printf("failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}



