#include"main.h"
#include <fcntl.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 *         If the input string is NULL, it returns 0.
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - Creates or truncates a file and writes text content to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
