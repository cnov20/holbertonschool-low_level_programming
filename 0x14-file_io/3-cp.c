#include "holberton.h"

/**
 * main - function that copies content of a file to another file
 * @ac: argument count given via command line
 * @av: value of given arguments
 *
 * Return: (1) - on SUCCESS / (-1) - on FAILURE
 */

int main(int ac, char **av)
{

	int fd_from, fd_to, fd_close;
	int length;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buffer [1,204];


	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1])

	}

	if (filename == NULL)
		return (-1);


	if (fd_to != NULL)
	{
		/* open */
		fd_from = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
	}

	if (fd_from == -1)
		return (-1);

	/* write */
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
		{
			length++;
		}

		fd_write = write(fd_from, text_content, length);
	}

	if (fd_write == -1)
		return (-1);

	/* close */
	fd_close = close(fd_from);

	if (fd_close == -1)
		return (-1);

	return (1);
}
