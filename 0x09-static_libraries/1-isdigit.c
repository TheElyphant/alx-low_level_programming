#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: is the int we us to check the argument
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
