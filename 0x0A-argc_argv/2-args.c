#include <stdio.h>

/**
 * main - The entry point and it prints the all the arguments passed
 * separated with a new line
 * @argc: The argument count or the number of command line
 * arguments including the program name
 * @argv: An array of the command line arguments
 * Return: Returns and int
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
