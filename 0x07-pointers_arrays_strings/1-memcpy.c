#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination array tobe copied 
 * @src: pointer to the source of data tobe copied
 * @n: number of bytes tobe copied
 *
 * Return: pointer to destination 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mbon;

	mbon = dest;
	
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (mbon);
}

