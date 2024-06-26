#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: The name of the file to read.
* @letters: The number of letters it should read and print.
*
* Return: The actual number of letters it could read and print.
*         If the file can not be opened or read, return 0.
*         If filename is NULL return 0.
*         If write fails or does not write the expected amount of bytes,
*         return 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
