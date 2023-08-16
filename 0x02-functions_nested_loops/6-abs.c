#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * _abs - A function that computes the absolute value of an integer
 * @r: the int for the  arguments of the function
 * Return: 0
 */
int _abs(int r)
{
	if (r > 0 || r == 0)
	{
		return (r);
	}
	else
		return (r * -1);
}
