#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file
 * @letters: The number of bytes to read
 * Return: 0 if file cannot be opened or read
 * if filename is NULL return 0
 * if write fails or does not write the expected amount
 * of bytes return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t pos = 0;
	size_t len = letters;
	int fd;
	ssize_t ret, w;
	char *str = calloc(letters, sizeof(char));

	if (str == NULL)
		return (0);
	if (filename == NULL)
	{
		free(str);
		return (0);
	}	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free (str);
		return (0);
	}
	while (len != 0 && (ret = read(fd, str + pos, len)) != 0)
	{
		if (ret == -1)
		{
			if (errno == EINTR)
				continue;
			return (0);
		}
		w = write(STDOUT_FILENO, str, ret);
		if (w != ret)
		{
			free(str);
			return (0);
		}
		len -= ret;
		pos += ret;
	}
	printf("%s", str);
	if (close(fd) == -1)
	{
		free(str);
		return (0);
	}
	return (w);
}
