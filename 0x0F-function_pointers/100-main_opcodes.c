#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes
* @argc: argument count
* @argv: argument array
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_ptr[i]);
			break;
		}
		printf("%2hhx", main_ptr[i]);
	}
	return (0);
}
