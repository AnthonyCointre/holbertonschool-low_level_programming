#include "main.h"

/**
* create_file - Creates a file.
* @filename: The name of the file to create.
* @text_content: A NULL terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*         If the file already exists, truncate it.
*         If filename is NULL return -1.
*         If text_content is NULL create an empty file.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}

		bytes_written = write(fd, text_content, length);

		if (bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
