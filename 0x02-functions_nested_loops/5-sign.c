#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: is the int that will be used for argument of the function
 * Return: 1 and prints + if n is greater than zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('+\n');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0\n');
	return (0);
	}
	else
	{
	_putchar('-\n');
	return (-1);
	}
}
