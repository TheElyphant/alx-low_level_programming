#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* **strtow - splits a string into words.
* @str: input string
* Return: 0
*/
char **strtow(char *str)
{
	int num_words;
	char *token;
	char **words;
	int word_index;
	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = 0;
	token = strtok(str, " \t\n");
	while (token != NULL)
	{
		num_words++;
		token = strtok(NULL, " \t\n");
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	token = strtok(str, " \t\n");
	word_index = 0;
	while (token != NULL)
	{
		words[word_index] = strdup(token);
		if (words[word_index] == NULL)
		{
			for (i = 0; i < word_index; i++)
			{
				free(words[i]);
			}
			return (NULL);
		}
		token = strtok(NULL, " \t\n");
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
