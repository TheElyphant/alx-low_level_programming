#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for lower case or uppercase
 * @c: is the int that will be used for argument of the function
 * Return: 1 if lowercase or uppercase or otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
