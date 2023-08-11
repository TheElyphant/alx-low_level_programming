#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	printf("Size of a double: %zu bytes\n", sizeof(double));
	printf("Size of a char: %zu bytes\n", sizeof(char));
	return (0);
}
