#include "holberton.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: pointer to file that is to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: (1) - on SUCCESS / (-1) - on FAILURE
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd_open, fd_write, fd_close;
	int length;
	mode_t file_permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	/* open */
	fd_open = open(filename, O_RDWR | O_APPEND, file_permissions);

	if (fd_open == -1)
		return (-1);

	/* write */
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
		{
			length++;
		}

		fd_write = write(fd_open, text_content, length);
	}

	if (fd_write == -1)
		return (-1);

	/* close */
	fd_close = close(fd_open);

	if (fd_close == -1)
		return (-1);

	return (1);
}
