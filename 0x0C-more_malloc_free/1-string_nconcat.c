#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *string_nconcat -  concatenates two strings.
* @s1: input string
* @s2: input string
* @n: unsigned int
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
	{
	return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
