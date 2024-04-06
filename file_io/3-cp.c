#include "main.h"

/**
* error_exit - Prints error message and exits with specified code.
* @code: The exit code.
* @message: The error message to print.
*/
void error_exit(int code, const char *message) {

	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

int main(int argc, char **argv) {

	int fd_from, fd_to;

	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (argc != 3) {
		error_exit(97, "Usage: cp file_from file_to");
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	buffer = (char *)malloc(sizeof(char) * 1024);
	if (buffer == NULL) {
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		close(fd_from);
		close(fd_to);
		exit(100);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	free(buffer);
	close(fd_from);
	close(fd_to);

	return (0);
}
