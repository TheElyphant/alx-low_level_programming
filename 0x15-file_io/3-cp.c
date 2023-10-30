#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char *create_buffer(char *file);
void close_file(int fd);
/**
* create_buffer - Allocates memory for a buffer.
* @file: The name of the file being processed.
* Return: A pointer to the allocated buffer or NULL.
*/
char *create_buffer(char *file)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
* close_file - Close a file descriptor.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
	int close_status;

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - Copy the content of one file to another.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
* Return: 0 on success, other values on failure.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	bytes_read = read(fd_from, buffer, BUFFER_SIZE);

	do {
		if (fd_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		bytes_written = write(fd_to, buffer, bytes_read);

		if (fd_to == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytes_read > 0);
	free(buffer);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
