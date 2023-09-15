#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
* @array: iterator
* @size: size of the array
* @action: pointer to the function
* Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		printf("Array pointer is NULL\n");
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
