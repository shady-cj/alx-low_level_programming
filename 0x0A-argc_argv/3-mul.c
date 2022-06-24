#include <stdio.h>

/**
 * main - The entry point and it prints the multiplication of
 * two numbers passed from the command line
 * @argc: The argument count or the number of command line
 * arguments including the program name
 * @argv: An array of the command line arguments
 * Return: Returns and int
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
