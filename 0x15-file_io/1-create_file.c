#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: The filename to create
 * @text_content: The text to write into the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);

	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
