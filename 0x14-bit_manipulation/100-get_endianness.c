#include <stdio.h>
#include "main.h"
/**
* get_endianness - Checks all the endianess.
* Return: void
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
