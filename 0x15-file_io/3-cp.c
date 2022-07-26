#include "main.h"
/**
 * buff_str - This is an helper function that creates a buffer
 * @bytes: The number of bytes to allocate
 * @filename: The filename incase of error
 * Return: The pointer to the newly allocated buffer
 */
char *buff_str(int bytes, char *filename)
{
	char *buff = malloc(sizeof(char) * bytes);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - This helper function closes the opened files
 * and check if there is an error
 * @fd: The file descriptor id
 * Return: void
 */
void close_file(int fd)
{
	int c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * cant_write - An helper function that raises an error if writing into
 * a file fails
 * @filename: The filename where the writing errror occured
 */
void cant_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
 * cant_read - An helper function that raises an error if
 * reading a file fails
 * @filename: The filename where the error occured
 */
void cant_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * main - program that copies the content of a file
 * to another file.
 * @argc: The argument count
 * @argv: The list of args
 * Return: An int
 */
int main(int argc, char *argv[])
{
	char *buff;
	int fd_from, fd_to;
	ssize_t f_read, f_write;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		cant_read(argv[1]);
	fd_to = creat(argv[2], 0664);
	if (fd_to == -1)
		cant_write(argv[2]);
	buff = buff_str(1024, argv[2]);
	f_read = read(fd_from, buff, 1024);
	if (f_read == -1)
		cant_read(argv[1]);
	do
	{
		f_write = write(fd_to, buff, f_read);
		if (f_write == -1)
			cant_write(argv[2]);
		free(buff);
		buff = buff_str(1024, argv[2]);
		f_read = read(fd_from, buff, 1024);

	} while (f_read > 0);
	close_file(fd_from);
	close_file(fd_to);
	free(buff);
	return (0);
}
