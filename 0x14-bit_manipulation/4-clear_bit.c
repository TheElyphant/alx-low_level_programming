#include "main.h"
#include <stdio.h>
/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: unsigned int.
* @index: index starting fro 0.
* Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;

	mask = ~mask;

	*n &= mask;

	return (1);
}
