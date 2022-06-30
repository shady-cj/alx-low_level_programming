#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A function that returns the product of 2 numbers
 * @argc: The argument count
 * @argv: The list of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	long long unsigned int mul;
	int len, f1, f2, num1, num2;
	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	f1 = (int) strlen(argv[1]);
	f2 = (int) strlen(argv[2]);

	if (f1 == 1 && f1 == '0' || f2 == 1 && f2 == '0')
	{
		printf("%d\n", 0);
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	mul = num1 * (long long unsigned int) num2;
	printf("%llu\n", mul);
}
