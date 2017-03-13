#include "holberton.h"

/**
 * read_textfile - function reads a text file and prints it to POSIX std output
 * @filename: text file to be read and printed
 * @letters: number of letters to be read and printed
 *
 * Return: Actual number of letters successfully read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd_open, fd_read, fd_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* malloc space for file to be read and printed to std out */

	buffer = malloc(sizeof(char) * letters);

	/* open */

	fd_open = open(filename, O_RDONLY);

	/* read */

	fd_read = read(fd_open, buffer, letters);

	/* write */

	fd_write = write(STDOUT_FILENO, buffer, fd_read);

	if (fd_write == -1)
		return (0);

	return (fd_read);
}
