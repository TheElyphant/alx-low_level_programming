#include <stdio.h>
#include "function_pointers.h"
/**
* print_name_callback - callback function that prints name.
* @name: the name
* Return: Nothing
*/
void print_name_callback(char *name)
{
		printf("Hello, %s!\n", name);
}
/**
* print_name - print the name
* @name: the name
* @f: pointer
* Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
