#include "holberton.h"

/**
 * create_file - function creates a file
 * @filename: pointer to file that is to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: (1) - on SUCCESS / (-1) - on FAILURE
 */

int create_file(const char *filename, char *text_content)
{

	int fd_open, fd_write, fd_close;
	char *buffer;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}

	/* allocate space for file to be read and printed to std out*/
	buffer = malloc(sizeof(char));

	/* open */
	fd_open = open(filename, O_RDWR);

	/* write */
	fd_write = write(STDOUT_FILENO, buffer, *text_content);

	if (fd_write == -1)
		return (-1);

	/* close */
	fd_close = close(fd_open);

	if (fd_close == -1)
		return (-1);

	return (1);
}
