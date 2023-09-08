#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* *_calloc - allocates memory for an array, using malloc.
* @nmemb: allocate memory
* @size: allocate memory
* Return: 0;
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
