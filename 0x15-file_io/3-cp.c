#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_content(av[1], av[2]);
	return (0);
}

/**
 * cp_content - function that copies the content of a file to another file
 * @file_from: file to copy
 * @file_to: file to paste
 * Return: 1 if success, -1 if buf fail, exit if other issues
 */

int cp_content(const char *file_from, const char *file_to)
{
	ssize_t read_return, close_return, write_return;
	int fd_from, fd_to;
	char buf[1024];

	if (file_from == NULL)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_to), exit(98);

	while ((read_return = read(fd_from, buf, 1024)) != 0)
	{
		if (read_return == -1)
			dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);
		write_return = write(fd_to, buf, read_return);
		if (write_return == -1)
			dprintf(2, "Error: Can't close fd %s\n", file_to), exit(100);
	}

	close_return = close(fd_from);
	if (close_return == -1)
		dprintf(2, "Error: Can't close fd %s\n", file_from), exit(100);
	close_return = close(fd_to);
	if (close_return == -1)
		dprintf(2, "Error: Can't close fd %s\n", file_to), exit(100);

	return (1);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(char *s)
{

int i = 0;

	while (*s != 0)
		s++, i++;

	return (i);
}
