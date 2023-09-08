#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* *malloc_checked - allocates memory using malloc.
* @b: checked input
* Return: 0:
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
/**
* main - allocate memory of 1024
* Return: 0
*/
int main(void)
{
	char *myArray = (char *)malloc_checked(sizeof(char) * 1024);

	free(myArray);
	return (0);
}
