#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read and print
 * @letters: number of letters to read and print
 * Return: Actual number of letters it could be read and print, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_return, write_return, close_return;
	int fd;
	char *buf;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_return = read(fd, buf, letters);
	if (read_return == -1)
	{
		free(buf);
		return (0);
	}

	write_return = write(STDOUT_FILENO, buf, letters);
	if (write_return == -1)
	{
		free(buf);
		return (0);
	}

	close_return = close(fd);
	if (close_return == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (letters);
}
