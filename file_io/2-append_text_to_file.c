#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file.
* @text_content: The NULL terminated string to add at the end of the file.
*
* Return: 1 on success and -1 on failure.
*         If filename is NULL return -1
*         If text_content is NULL, do not add anything to the file.
*         If the file exists return 1
*         If the file does not exist or if you do not have
*         the required permissions to write the file return -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
