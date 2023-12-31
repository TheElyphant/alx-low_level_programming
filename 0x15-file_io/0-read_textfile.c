#include "main.h"
#include <stdlib.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of file to read.
* @letters: number of letters it should read and print.
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	bytes_read = read(file_descriptor, buffer, letters);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
