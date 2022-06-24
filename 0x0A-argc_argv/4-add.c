#include <stdio.h>
#include <ctype.h>

/**
 * main - The entry point and it prints the sum of all the positive
 * numbers passed into the command line
 * @argc: The argument count or the number of command line
 * arguments including the program name
 * @argv: An array of the command line arguments
 * Return: Returns an int
 */

int main(int argc, char *argv[])
{
	int sum, i, j;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	sum = 0;
	
	while (i < argc)
	{
		str = argv[i];
		while(*str != '\0')
		{
			if (isalpha(*str))
			{
				puts("Error");
				return (1);
			}
			str++;
		}
		j = atoi(argv[i]);
		if (j > 0)
			sum += j;
		i++;

	}
	printf("%d\n", sum);
	return (0);
}
