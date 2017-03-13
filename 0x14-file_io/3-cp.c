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
	int fd_from, fd_to, read_value, write_value;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char ch, *buffer;

	if (ac != 3)
		usage_failure();
	if (av[1] == NULL)
		read_failure(av[1]);
	if (av[2] == NULL)
		write_failure(av[2]);
	/* allocate space for file to be read and printed to std out*/
	buffer = malloc(sizeof(ch) * BUFF_SIZE);
	/* open file read from (actual file to be copied)*/
	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		read_failure(av[1]);
	/* open file to be written to (the actual copy)*/
	fd_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, mode);
	if (fd_to == -1)
		write_failure(av[2]);
	/* read from source file, copy into buffer */
	read_value = read(fd_from, buffer, BUFF_SIZE);

	/* write to target file, from buffer - while true (greater than 0)*/
	while (read_value)
	{
		if (read_value == -1)
			read_failure(av[1]);
		write_value = write(fd_to, buffer, read_value);
		if (write_value == -1)
			write_failure(av[2]);
		read_value = read(fd_from, buffer, BUFF_SIZE);
	}
	/* close source file and target file*/
	if (close(fd_from) == -1)
		close_failure(fd_from);
	if (close(fd_to) == -1)
		close_failure(fd_to);
	return (0);
}

/**
 * usage_failure - prints to standard error if argument count is incorrect
 *
 * Return: nothing - void
 */

void usage_failure(void)
{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
}

/**
 * read_failure - prints to standard error if file can't be read
 * @fd: file descriptor pointer
 *
 * Return: nothing - void
 */

void read_failure(char *fd)
{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
		exit(98);
}

/**
 * write_failure - prints to standard error if file can't be written
 * @fd: file descriptor pointer
 *
 * Return: nothing - void
 */

void write_failure(char *fd)
{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
		exit(99);
}

/**
 * close_failure - prints to standard error if file can't be closed
 * @fd: file descriptor
 *
 * Return: nothing - void
 */

void close_failure(int fd)
{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
}
