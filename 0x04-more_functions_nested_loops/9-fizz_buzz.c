#include <stdio.h>

/**
 * main - Entry point
 * prints fizzbuzz
 * @void: void
 * Return: int
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
		i++;
	}

	printf("\n");
	return (0);
}
