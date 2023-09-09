#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* isNumeric - string containing only digits
* @str: input string
* Return: 0
*/
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
		return (1);
}
/**
* multiply - multiply two positive numbers
* @num1: positive number
* @num2: positive number
* Return: 0
*/
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
* main - check number of arguments
* @argc: argument count
* @argv: argument array
* Return: 0
*/
int main(int argc, char *argv[])
{
	char *arg1;
	char *arg2;
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	arg1 = argv[1];
	arg2 = argv[2];

	if (!isNumeric(arg1) || !isNumeric(arg2))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(arg1);
	num2 = atoi(arg2);

	if (num1 < 1 || num2 < 1)
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
