#include "main.h"
/**
* *leet - encodes a string into 1337.
* @n: input value
* Return: n value
*/
char *leet(char *n)
{
	char s1[] = "aAeEoOtTiL";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
