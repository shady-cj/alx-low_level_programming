#include "main.h"
/**
 * append_text_to_file - This function appends text to an
 * existing file
 * @filename: The filename
 * @text_content: The content to append
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	len = strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
