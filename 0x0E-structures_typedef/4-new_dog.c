#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* my_strdup - duplicsate strin
* strlen - length of string
* strcpy - copy the string
* @str: string input
* Return: newStr
*/
char *my_strdup(const char *str)
{
	char *newStr;

	if (!str)
	{
		return (NULL);
	}

	newStr = (char *)malloc(strlen(str) + 1);
	if (!newStr)
	{
		return (NULL);
	}
	strcpy(newStr, str);
	return (newStr);
}
/**
* *new_dog - creates a new dog.
* @name: new name
* @age: new age
* @owner: new owner
* Return: pointer to new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (!name  || !owner)
	{
		return (NULL);
	}

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (!newDog)
	{
		return (NULL);
	}

	newDog->name = strdup(name);

	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = strdup(owner);

	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
