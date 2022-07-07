#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vectors
 * Return: Value is an int
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int value, a1, a2;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (strlen(argv[2]) > 1 || strlen(argv[2]) == 0)
	{
		puts("Error");
		exit(99);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		puts("Error");
		exit(99);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	value = f(a1, a2);
	printf("%d\n", value);
	return (0);
	
}
