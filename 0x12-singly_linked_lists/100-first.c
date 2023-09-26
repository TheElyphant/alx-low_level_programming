#include <stdio.h>
/**
* construction - print desired text.
* Return: 0
*/
void construction(void) __attribute__((constructor));

void construction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
