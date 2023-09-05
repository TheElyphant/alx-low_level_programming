#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *create_array - function that creates an array of chars,
* and initializes it with a specific char.
* @size: parameter to be inputed
* @c: parameter to be inputed
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
