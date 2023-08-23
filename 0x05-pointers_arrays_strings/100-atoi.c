#include "main.h"
/**
* _atoi - convert a string to an integer.
* @s: string to convert
* Return: value of integer
*/
int _atoi(char *s)
{
	int m, n, o, len, p, digit;

	m = 0;
	n = 0;
	o = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && p == 0)
	{
		if (s[m] == '-')
		++n;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (n % 2)
				digit = -digit;
			o = o * 10 + digit;
			p = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			p = 0;
		}
		m++;
	}
	if (p == 0)
		return (o);
}
