#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: file to create
 * @text_content: text to add in the file
 * Return: 1 if success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, create_return, write_return, close_return;

	if (filename == NULL)
		return (-1);

	create_return = creat(filename, 0600);
	if (create_return == -1)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd == -1)
		return (-1);

	write_return = write(fd, text_content, _strlen(text_content));
	if (write_return == -1)
	{
		close(fd);
		return (-1);
	}

	close_return = close(fd);
	if (close_return == -1)
		return (-1);

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
