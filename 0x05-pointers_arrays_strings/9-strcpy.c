#include "main.h"
/**
* *_strcpy - copies the string pointed to by src
* @dest: Array name
* @src: elements of the array
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; n < i; n++)
	{
		dest[n] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
