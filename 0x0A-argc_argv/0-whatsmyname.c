#include <stdio.h>

/**
 * main - The entry point and it prints the program name
 * @argc: The argument count or the number of command line
 * arguments including the program name
 * @argv: An array of the command line arguments
 * Return: Returns and int
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
