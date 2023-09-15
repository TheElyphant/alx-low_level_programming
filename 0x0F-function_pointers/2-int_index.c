#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - return index if comparison = true, else -1
* @array: element
* @size: number of elements in the array
* @cmp: pointer to the functions
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}
