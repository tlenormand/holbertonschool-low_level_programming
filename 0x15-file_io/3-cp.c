#include "main.h"

/**
 * cp_content - function that copies the content of a file to another file
 * @file_from: file to copy
 * @file_to: file to paste
 * Return: 0 if success, exit if other issues
 */

void cp_content(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_return, write_return;
	char *buf;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);

	while ((read_return = read(fd_from, buf, 1024)) != 0)
	{
		if (read_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buf), exit(98);
		}
		write_return = write(fd_to, buf, read_return);
		if (write_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buf), exit(99);
		}
	}

	free(buf);
	_close(fd_from);
	_close(fd_to);
}

/**
 * _close - function that close an open file
 * @fd: file to close
 */

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	cp_content(argv[1], argv[2]);

	return (0);
}
