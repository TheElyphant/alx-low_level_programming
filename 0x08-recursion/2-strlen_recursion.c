#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - returns the length of a string.
* @s: input
* Return: 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	return (1);
}
