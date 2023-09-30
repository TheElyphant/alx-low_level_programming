#include "main.h"
#include <stdio.h>
/**
* get_endianness - checks the endianness.
* Return: 0
*/
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
