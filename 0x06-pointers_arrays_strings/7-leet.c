#include "main.h"
/**
* *leet - encodes a string into "1337" on specified replacements.
* @n: input string.
*
* Return: n value
*/
char *leet(char *n)
{
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (n[i] == leet_chars[j])
			{
				n[i] = leet_replacement[j];
				break;
			}
		}
	}

	return (n);
}
