#include <stdio.h>
#include "dog.h"
/**
* init_dog - initialize a variable of type struct dog
* @d: the initializer
* @name: the name
* @age: the age
* @owner: the owner
* Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		printf("Error: Provided pointer is NULL.\n");
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
