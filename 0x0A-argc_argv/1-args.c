#include <stdio.h>

/**
 * main - The entry point and it prints the number of
 * command line arguments passed
 * @argc: The argument count or the number of command line
 * arguments including the program name
 * @argv: An array of the command line arguments
 * Return: Returns and int
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
