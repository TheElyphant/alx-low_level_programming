#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper -  checks for uppercase character.
 * @c: is the int we would use for the argument
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
