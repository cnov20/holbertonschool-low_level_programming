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
	char *buffer;

	if (filename == NULL)
		return (-1);

	if (ac != 3)
		usage_failure();

	if(av[1] == NULL)
		read_failure(

	/* allocate space for file to be read and printed to std out*/
	buffer = malloc(sizeof(char) * BUFF_SIZE);

	/* open */
       	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)

	/* write */
	fd_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, mode);

	if (fd_from != NULL)
	{
		length = 0;
		while ([length] != '\0')
		{
			length++;
		}

		fd_write = write(fd_to, buffer, length);
	}

	if (fd_write == -1)
		return (-1);

	/* close */
	fd_close = close(fd_from);

	if (fd_close == -1)
		return (-1);

	return (1);
}

/**
 * usage_failure - prints to standard error if argument count is incorrect
 *
 * Return: nothing - void
 */

void usage_failure(void)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * read_failure - prints to standard error if file can't be read
 *
 * Return: nothing - void
 */

void read_failure(char *fd)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

}

/**
 * write_failure - prints to standard error if file can't be written
 *
 * Return: nothing - void
 */

void write_failure(char *fd)
{
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * close_failure - prints to standard error if file can't be closed
 *
 * Return: nothing - void
 */

void close_failure(int fd)
{
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd_close);
		exit(100);
	}
}
