#include "main.h"
#include <string.h>
/**
* _strlen - returns the length of a string
* @s: string
* Return: lenght
*/
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
