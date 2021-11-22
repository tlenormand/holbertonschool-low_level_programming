#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file add text at the end
 * @text_content: text to add
 * Return: 1 if success, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t write_return;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	write_return = write(fd, text_content, _strlen(text_content));
	if (write_return == -1)
		return (-1);

	close(fd);

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
