#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point of the program
* @argc: input
* @argv: input
* Return: Alway 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
