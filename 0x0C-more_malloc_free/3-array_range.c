#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* *array_range - creates an array of integers.
* @min: value input
* @max: value input
* Return: 0
*/
int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	result = (int *)malloc(sizeof(int) * (max - min + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		result[i] = min;
	}
	return (result);
}
