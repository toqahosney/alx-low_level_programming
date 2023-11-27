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
 * append_text_to_file - Appends text content to a file or creates a new file.
 * @filename: Name of the file.
 * @text_content: Text content to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
		return (bytes == len ? 1 : -1);
}
