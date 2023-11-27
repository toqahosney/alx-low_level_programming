#include"main.h"

/**
 * read_textfile - Reads and prints the content
 * of a file to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters (bytes) to read and print.
 *
 * Return: The actual number of bytes read and printed. If an error occurs,
 *         or if the file cannot be opened, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
