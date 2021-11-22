#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	if (argv[1] == NULL)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	cp_content(argv[1], argv[2]);

	return (0);
}

/**
 * cp_content - function that copies the content of a file to another file
 * @file_from: file to copy
 * @file_to: file to paste
 * Return: 0 if success, exit if other issues
 */

int cp_content(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_return, write_return, close_return;
	char *buf;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);

	while ((read_return = read(fd_from, buf, 1024)) != 0)
	{
		if (read_return == -1)
			dprintf(2, "Error: Can't read from file %s\n", file_from), free(buf), exit(98);
		write_return = write(fd_to, buf, read_return);
		if (write_return == -1)
			dprintf(2, "Error: Can't write to %s\n", file_to), free(buf), exit(99);
	}

	close_return = close(fd_from);
	if (close_return == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), free(buf), exit(100);
	close_return = close(fd_to);
	if (close_return == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), free(buf), exit(100);

	free(buf);
	return (0);
}
