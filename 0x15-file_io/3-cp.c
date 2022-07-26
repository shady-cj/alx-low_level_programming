#include "main.h"
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
	int c_1, c_2;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = creat(argv[2], 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
	}
	f_read = read(fd_from, buff, 1024);
	if (f_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	do
	{
		f_write = write(fd_to, buff, f_read);
		if (f_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                	exit(99);
		}
		free(buff);
		buff = malloc(sizeof(char) * 1024);
       		if (buff == NULL)
        	{
                	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                	exit(99);
        	}
		f_read = read(fd_from, buff, 1024);

	} while (f_read > 0);
	c_1 = close(fd_from);
	c_2 = close(fd_to);
	if (c_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (c_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}
