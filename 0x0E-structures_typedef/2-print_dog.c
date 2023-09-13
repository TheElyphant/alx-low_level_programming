#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: null
*/
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
