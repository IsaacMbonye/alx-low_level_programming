#include <stdio.h>

/**
 * Write a program that prints the name of the file 
 * it was compiled from, followed by a new line.
 *
 * Allowed to use standard library
 */
int main(void)
{
	printf("Name of source file: %s\n", __FILE__);
	
	return (0);
}

