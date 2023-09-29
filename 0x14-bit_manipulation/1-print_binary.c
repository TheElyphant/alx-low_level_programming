#include "main.h"
#include <stdio.h>
/**
* print_binary - prints the binary representation of a number.
* @n: unsigned int.
* Return: 0
*/
void print_binary(unsigned long int n)
{
	int shift;

	if (n == 0)
	{
		printf("0\n");
		return;
	}
	shift = sizeof(unsigned long int) * 8 - 1;

	while (!(n & (1UL << shift)))
		shift--;

	for (; shift >= 0; shift--)
		printf("%ld", (n >> shift) & 1);

	printf("\n");
}
