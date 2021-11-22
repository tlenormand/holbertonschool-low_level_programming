#include <stdio.h>
#include <stdlib.h>
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
	ssize_t read_return, create_return, close_return;
	int fd;
	char *buf = NULL;

	if (file_from == NULL)
		printf("Error: Can't read from file %s\n", file_from), exit(98);

	fd = open(file_from, O_RDONLY);

	if (fd == -1)
		printf("Error: Can't read from file %s\n", file_from), exit(98);

	buf = malloc(1024);
	if (buf == NULL)
		free(buf), exit(95);

	read_return = read(fd, buf, 256);
	if (read_return == -1)
		free(buf), printf("Error: Can't read from file %s\n", file_from), exit(98);

	create_return = create_file(file_to, buf);
	if (create_return == -1)
		free(buf), printf("Error: Can't write to %s\n", file_to), exit(99);

	close_return = close(fd);
	if (close_return == -1)
		free(buf), printf("Error: Can't close fd %s\n", file_to), exit(100);

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

/**
 * create_file - Create a function that creates a file
 * @filename: file to create
 * @text_content: text to add in the file
 * Return: 1 if success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, new, write_return, close_return;

	if (filename == NULL)
		return (-1);

	new = creat(filename, 0664);
	if (new == -1)
		return (-1);

	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (-1);

	write_return = write(fd, text_content, _strlen(text_content));
	if (write_return == -1)
		return (-1);

	close_return = close(fd);
	if (close_return == -1)
	{
		printf("Error: Can't close fd %s\n", filename);
		exit(100);
	}

	return (1);
}
