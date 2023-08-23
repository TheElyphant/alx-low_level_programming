#include "main.h"
/**
* puts2 - prints every other character of a string
* starting with the first character
* @str: input
* Return: print
*/
void puts2(char *str)
{
	int len = 0;
	int m = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	m = len - 1;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('/n');
}
