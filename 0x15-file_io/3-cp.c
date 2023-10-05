#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* exit_with_error - Display an error message and exit.
* @exit_code: The exit code to use.
* @message: The error message format.
* @arg: The argument to include in the error message.
*/
void exit_with_error(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}

/**
* main - Copy the content of one file to another.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
* Return: 0 on success, other values on failure.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to\n", argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", argv[2]);
	return (0);
}
