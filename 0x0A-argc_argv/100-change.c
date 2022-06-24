#include <stdio.h>

/**
 * main - The entry point and it prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The argument count or the number of command line
 * arguments including the program name
 * @argv: An array of the command line arguments
 * Return: Returns and int
 */

int main(int argc, char *argv[])
{
	int numofchange, cents, rem;
	int cents_25, cents_10, cents_5;
	int cents_2, cents_1;

	if (argc == 1)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}
	numofchange = 0;
	cents_25 = cents / 25;
	rem = cents % 25;
	cents_10 = rem / 10;
	rem = rem % 10;
	cents_5 = rem / 5;
	rem = rem % 5;
	cents_2 = rem / 2;
	rem = rem % 2;
	cents_1 = rem / 1;
	
	numofchange = cents_25 + cents_10 + cents_5 + cents_2 + cents_1;

	printf("%d\n", numofchange);
	return (0);
}
