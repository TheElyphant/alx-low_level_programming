#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
* struct dog - new type
* @name: a character
* @age: a float
* @owner: a character
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
