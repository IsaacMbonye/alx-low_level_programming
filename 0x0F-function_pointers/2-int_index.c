#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in array
 * @cmp: pointer to the function tobe used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
		return (-1);
	if(array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size ;)
	{	
		if (cmp(array[i]))
			return (array[i]);
	}
	return (-1);
}



