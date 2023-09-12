#include <stdio.h>
/**
* main - prints the name of the file
* Return: 0
*/
int main(void)
{
	const char *filename = __FILE__;

	while (*filename)
	putchar(*filename++);

	putchar('\n');

	return (0);
}
