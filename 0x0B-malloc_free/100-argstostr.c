#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* *argstostr -  concatenates all the arguments of your program.
* @ac: argument
* @av: argument
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *result;
	int index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	result[total_length] = '\0';
	return (result);
}
