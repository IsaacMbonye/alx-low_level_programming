#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);


