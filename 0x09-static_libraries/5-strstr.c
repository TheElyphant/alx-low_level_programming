#include "main.h"
/**
* _strstr - locates a substring.
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *h = needle;

		while (*c == *h && *h != '\0')
		{
			c++;
			h++;
		}
		if (*h == '\0')
		return (haystack);
	}
	return (0);
}
